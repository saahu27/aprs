#! /bin/sh

rosdep update --include-eol-distros
sudo apt update
rosdep install --from-paths src --ignore-src -r -y