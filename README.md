# ros2-unit-tests

Running unit tests in ROS2 through GitHub Actions and other cool stuff B)

Using [ros-tooling/action-ros-ci](https://github.com/ros-tooling/action-ros-ci) to build and test packages. As stated in the documentation:

The action first assembles a workspace, then runs `colcon build`, and `colcon test` in it.

Also used for testing semantic versioning. This is done via a manual workflow which automatically updates the release version based on commit names.