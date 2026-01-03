import os
from glob import glob
from setuptools import setup

package_name = "chess_ui"

setup(
    name=package_name,
    version="0.1.0",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        (os.path.join("share", package_name, "launch"), glob("launch/*.launch.py")),
        (os.path.join("share", package_name, "web"), glob("chess_ui/web/*")),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="Costin",
    maintainer_email="costin@example.com",
    description="Simple web UI for moving chess pieces via ROS 2 services.",
    license="Apache-2.0",
    entry_points={
        "console_scripts": [
            "chess_ui_server = chess_ui.ui_server:main",
        ],
    },
)
