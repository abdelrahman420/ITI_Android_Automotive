#!/bin/bash

# Check if the .bashrc file exists in the user's home directory
if [ -f "$HOME/.bashrc" ]; then
    # Append new environment variables to the .bashrc file
    echo "export HELLO=\$HOSTNAME" >> "$HOME/.bashrc"
    echo "LOCAL=\$(whoami)" >> "$HOME/.bashrc"

    # Open another terminal
    gnome-terminal
fi
