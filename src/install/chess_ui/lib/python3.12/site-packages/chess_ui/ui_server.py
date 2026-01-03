import argparse
import json
import os
import threading
import time
from http import HTTPStatus
from http.server import SimpleHTTPRequestHandler, ThreadingHTTPServer

import rclpy
from rclpy.utilities import remove_ros_args
from ament_index_python.packages import get_package_share_directory
from rclpy.node import Node

from action_module.srv import MovePiece
from chesslab_setup2_interfaces.srv import DetectPiecePoses


class UiRosBridge(Node):
    def __init__(self) -> None:
        super().__init__("chess_ui_bridge")
        self._move_client = self.create_client(MovePiece, "/move_piece")
        self._detect_client = self.create_client(
            DetectPiecePoses, "/sensing_module/detect_piece_poses"
        )
        self._lock = threading.Lock()

    def call_move_piece(self, aruco_id: int, target_square: str, timeout: float) -> dict:
        with self._lock:
            if not self._move_client.wait_for_service(timeout_sec=2.0):
                return {"success": False, "message": "move_piece service unavailable"}

            req = MovePiece.Request()
            req.aruco_id = int(aruco_id)
            req.target_square = str(target_square)
            future = self._move_client.call_async(req)
            return self._wait_future(future, timeout, "move_piece")

    def call_detect_pieces(self, timeout: float) -> dict:
        with self._lock:
            if not self._detect_client.wait_for_service(timeout_sec=2.0):
                return {"success": False, "message": "detect_piece_poses service unavailable"}

            req = DetectPiecePoses.Request()
            future = self._detect_client.call_async(req)
            return self._wait_future(future, timeout, "detect_piece_poses")

    def _wait_future(self, future, timeout: float, label: str) -> dict:
        deadline = time.monotonic() + timeout
        while time.monotonic() < deadline:
            if future.done():
                result = future.result()
                if result is None:
                    return {"success": False, "message": f"{label} call failed"}
                if hasattr(result, "success"):
                    return {"success": bool(result.success), "message": str(result.message)}
                return {"success": True, "message": "OK"}
            time.sleep(0.02)
        return {"success": False, "message": f"{label} timed out after {timeout:.1f}s"}


class UiRequestHandler(SimpleHTTPRequestHandler):
    def __init__(self, *args, **kwargs) -> None:
        self._ros = kwargs.pop("ros_node")
        self._web_dir = kwargs.pop("web_dir")
        super().__init__(*args, directory=self._web_dir, **kwargs)

    def do_GET(self) -> None:
        if self.path == "/api/health":
            self._send_json({"ok": True})
            return
        super().do_GET()

    def do_POST(self) -> None:
        if self.path == "/api/move":
            payload = self._read_json()
            if payload is None:
                return
            aruco_id = payload.get("aruco_id")
            target_square = payload.get("target_square")
            if aruco_id is None or not target_square:
                self._send_json(
                    {"success": False, "message": "aruco_id and target_square required"},
                    status=HTTPStatus.BAD_REQUEST,
                )
                return
            result = self._ros.call_move_piece(aruco_id, target_square, timeout=30.0)
            self._send_json(result)
            return

        if self.path == "/api/detect":
            result = self._ros.call_detect_pieces(timeout=10.0)
            self._send_json(result)
            return

        self.send_error(HTTPStatus.NOT_FOUND, "Unknown endpoint")

    def _read_json(self) -> dict | None:
        try:
            length = int(self.headers.get("Content-Length", "0"))
        except ValueError:
            length = 0
        if length <= 0:
            self._send_json(
                {"success": False, "message": "empty request body"},
                status=HTTPStatus.BAD_REQUEST,
            )
            return None

        raw = self.rfile.read(length)
        try:
            return json.loads(raw.decode("utf-8"))
        except json.JSONDecodeError:
            self._send_json(
                {"success": False, "message": "invalid JSON"},
                status=HTTPStatus.BAD_REQUEST,
            )
            return None

    def _send_json(self, data: dict, status: HTTPStatus = HTTPStatus.OK) -> None:
        payload = json.dumps(data).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json")
        self.send_header("Content-Length", str(len(payload)))
        self.end_headers()
        self.wfile.write(payload)

    def log_message(self, fmt: str, *args) -> None:
        return


def _resolve_web_dir() -> str:
    try:
        share_dir = get_package_share_directory("chess_ui")
        web_dir = os.path.join(share_dir, "web")
        if os.path.isdir(web_dir):
            return web_dir
    except Exception:
        pass
    return os.path.join(os.path.dirname(__file__), "web")


def main() -> None:
    parser = argparse.ArgumentParser(description="Chess UI web server", add_help=True)
    parser.add_argument("--host", default="0.0.0.0")
    parser.add_argument("--port", type=int, default=8080)
    args, _ = parser.parse_known_args(remove_ros_args())

    rclpy.init()
    node = UiRosBridge()

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(node)
    spin_thread = threading.Thread(target=executor.spin, daemon=True)
    spin_thread.start()

    web_dir = _resolve_web_dir()
    server = ThreadingHTTPServer(
        (args.host, args.port),
        lambda *handler_args, **handler_kwargs: UiRequestHandler(
            *handler_args, ros_node=node, web_dir=web_dir, **handler_kwargs
        ),
    )

    node.get_logger().info(f"Chess UI available at http://{args.host}:{args.port}")
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        pass
    finally:
        server.shutdown()
        executor.shutdown()
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
