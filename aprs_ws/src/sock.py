
import socket
from time import sleep
import os

HOST = "192.168.0.1"  # The server's hostname or IP address
SEC_PORT = 54321  # The port used by the server

i_sec = socket.create_connection((HOST, SEC_PORT), timeout=0.5)

with open("gripper_close.txt","r") as f:
    close_program = f.read()

    i_sec.send(str.encode(close_program))
    print("sent")
