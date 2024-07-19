#!/bin/bash
USER_NAME=$1
GROUP_NAME=$2


if [ getent group "$GROUP_NAME"  > /dev/null 2>&1 ]; then
        echo "Group "$GROUP_NAME" already exist"
else 
        sudo groupadd "$GROUP_NAME"
        echo "Group '$GROUP_NAME' created"
fi  

if [ id -u "$USER_NAME"  > /dev/null 2>&1 ]; then
        echo "User "$USER_NAME" already exist"
else 
	sudo useradd "$USER_NAME"
	sudo usermod -aG "$GROUP_NAME" "$USER_NAME"
        echo "User '$USER_NAME' created and add in group '$GROUP_NAME'"
fi

echo "Diplay '$USER_NAME' info: "
id $USER_NAME

echo "Diplay '$GROUP_NAME' info: "
getent group $GROUP_NAME