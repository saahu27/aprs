#! /bin/sh

rosdep update --include-eol-distros
sudo apt update
sudo apt upgrade -y
rosdep install --from-paths src --ignore-src -r -y