import socket
from time import sleep
import os

HOST = "192.168.0.1"  # The server's hostname or IP address
SEC_PORT = 54321  # The port used by the server

i_sec = socket.create_connection((HOST, SEC_PORT), timeout=0.5)


hex_payload = bytes.fromhex("09 10 03 E8 00 03 06 01 00 00 00 00 00 72 E1")
i_sec.send(hex_payload)

sleep(0.3)

hex_payload = bytes.fromhex("09 10 03 E8 00 03 06 09 00 00 FF FF FF 42 29")
i_sec.send(hex_payload)