#!/usr/bin/env python3
"""
TF Chain Validator for Chess Robot

This script validates the TF chain from camera to robot base through ArUco markers.
It helps diagnose transform issues that cause grasp offset problems.

Usage:
    ros2 run sensing_module validate_tf_chain.py
    
Or directly:
    python3 validate_tf_chain.py
"""

import rclpy
from rclpy.node import Node
from rclpy.duration import Duration
import tf2_ros
import sys


class TFValidator(Node):
    def __init__(self):
        super().__init__('tf_validator')
        
        # Parameters
        self.declare_parameter('world_frame', 'world')
        self.declare_parameter('camera_frame', 'camera_color_optical_frame')
        self.declare_parameter('base_frame', 'base')
        self.declare_parameter('aruco_frame_prefix', 'aruco')
        self.declare_parameter('test_aruco_id', 316)
        
        self.world_frame = self.get_parameter('world_frame').value
        self.camera_frame = self.get_parameter('camera_frame').value
        self.base_frame = self.get_parameter('base_frame').value
        self.aruco_prefix = self.get_parameter('aruco_frame_prefix').value
        self.test_aruco_id = self.get_parameter('test_aruco_id').value
        
        # TF2 setup
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)
        
        # Wait for TF to be available
        self.get_logger().info('Waiting for TF tree to be available...')
        self.timer = self.create_timer(2.0, self.validate_tf_chain)
        
    def check_transform(self, source, target, description):
        """Try to lookup a transform and return success/failure with details."""
        try:
            trans = self.tf_buffer.lookup_transform(
                target, source,
                rclpy.time.Time(),
                Duration(seconds=2.0))
            
            t = trans.transform.translation
            r = trans.transform.rotation
            
            self.get_logger().info(f'  ✓ {description}')
            self.get_logger().info(f'    {source} → {target}')
            self.get_logger().info(f'    Translation: ({t.x:.4f}, {t.y:.4f}, {t.z:.4f})')
            self.get_logger().info(f'    Rotation: ({r.x:.4f}, {r.y:.4f}, {r.z:.4f}, {r.w:.4f})')
            return True, trans
        except tf2_ros.TransformException as ex:
            self.get_logger().error(f'  ✗ {description}')
            self.get_logger().error(f'    {source} → {target}')
            self.get_logger().error(f'    Error: {ex}')
            return False, None
    
    def validate_tf_chain(self):
        """Validate the entire TF chain for the chess robot."""
        self.get_logger().info('=' * 60)
        self.get_logger().info('TF Chain Validation for Chess Robot')
        self.get_logger().info('=' * 60)
        
        all_ok = True
        
        # 1. Check world → camera
        self.get_logger().info('\n[1] World to Camera Transform:')
        ok, _ = self.check_transform(self.camera_frame, self.world_frame, 
                                     'Camera calibration')
        all_ok = all_ok and ok
        
        # 2. Check world → robot base
        self.get_logger().info('\n[2] World to Robot Base Transform:')
        ok, _ = self.check_transform(self.base_frame, self.world_frame,
                                     'Robot base')
        if not ok:
            # Try base_link fallback
            ok, _ = self.check_transform('base_link', self.world_frame,
                                         'Robot base_link (fallback)')
        all_ok = all_ok and ok
        
        # 3. Check camera → aruco (direct)
        aruco_frame = f'{self.aruco_prefix}_{self.test_aruco_id}'
        self.get_logger().info(f'\n[3] Camera to ArUco ({aruco_frame}):')
        ok, _ = self.check_transform(aruco_frame, self.camera_frame,
                                     'ArUco detection (camera frame)')
        if ok:
            all_ok = all_ok and ok
        else:
            self.get_logger().warn(f'    ArUco marker {self.test_aruco_id} not visible')
            self.get_logger().warn('    Make sure the marker is in camera view')
        
        # 4. Check world → aruco (through chain)
        self.get_logger().info(f'\n[4] World to ArUco ({aruco_frame}) - Full Chain:')
        ok, trans = self.check_transform(aruco_frame, self.world_frame,
                                         'Full TF chain')
        if ok:
            all_ok = all_ok and ok
            t = trans.transform.translation
            self.get_logger().info(f'\n    ArUco {self.test_aruco_id} world position:')
            self.get_logger().info(f'    X: {t.x:.4f} m')
            self.get_logger().info(f'    Y: {t.y:.4f} m')
            self.get_logger().info(f'    Z: {t.z:.4f} m (marker height)')
        
        # 5. Summary
        self.get_logger().info('\n' + '=' * 60)
        if all_ok:
            self.get_logger().info('✓ TF Chain Validation PASSED')
            self.get_logger().info('  All required transforms are available.')
        else:
            self.get_logger().error('✗ TF Chain Validation FAILED')
            self.get_logger().error('  Some transforms are missing or incorrect.')
            self.get_logger().info('\nTroubleshooting steps:')
            self.get_logger().info('  1. Check aruco_broadcaster is running')
            self.get_logger().info('  2. Check camera calibration')
            self.get_logger().info('  3. Verify robot URDF is loaded')
        
        self.get_logger().info('=' * 60)
        
        # Only run once
        self.timer.cancel()
        
        # Keep node alive briefly to show results
        self.create_timer(1.0, lambda: rclpy.shutdown())


def main():
    rclpy.init()
    node = TFValidator()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()


if __name__ == '__main__':
    main()
