
PreRequisites :

1. Install NVIDIA Docker 2
            following the instructions
 [here](https://github.com/osrf/subt/wiki/Docker%20Install#install-nvidia-docker).

2. Install following extensions on your VSCode: 

    [2.1 Docker](https://marketplace.visualstudio.com/items?itemName=ms-azuretools.vscode-docker)

    [2.2 Remote-Containers](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-containers)

Environment :

1. Ros2 Rolling Ridley
2. Gazebo Garden

## Reuse
    
In the Docker file : go to line 168 and change to your desire workspace folder name(the folder name you cloned this repo to).
Open this folder in Vs code and press 'ctrl + Shft + B'. select rebuild and reopen in container.

## Setup Dependencies

once you are inside the DevContainer (see bottom left of VS code), press `ctrl + Shft + B` choose setup dependencies. This currently sources the dependencies for the aprs_ws. you can change that to take an argument and choose ws.

# Running UR simulation

1. press 'ctrl + shft + ` ' to open a new terminal
2. cd aprs_ws
3. ```colcon build```
4. ```. install/setup.bash```

Just Split the terminal by right click in terminal once inside the dev container for running multiple shells.

## UR Robot Simulation

```
ros2 launch gz_ros2_control_demos urrobot.launch.py
```

# Running Ariac2023 Simulation

1. press 'ctrl + shft + ` ' to open a new terminal
2. cd ariac_ws
3. ```colcon build```
4. ```. install/setup.bash```

# Launch simulation

```
ros2 launch ariac_gz ariac.launch.py
```