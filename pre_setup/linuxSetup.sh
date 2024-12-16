#!/bin/bash

sudo apt install libssl-dev -y
sudo apt install libncurses5-dev -y
sudo apt install xterm -y
#gcc cockCom.c cockClient.c cockServer.c cockCrypt.c -o cockCom -pthread -lssl -lcrypto -lncurses