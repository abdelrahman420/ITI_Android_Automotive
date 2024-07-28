#!/bin/bash

echo "Choose rootfs: "
echo "1) rootfs1"
echo "2) rootfs2"
echo "3) Resume in initRamfs"
read -r choice
case $choice in
    1)
        echo "You chose rootfs1"
        mkdir -p /mnt/rootfs1
        mount -t ext4 /dev/mmcblk0p2 /mnt/rootfs1
        chroot /mnt/rootfs1
        break
        ;;
    2)
        echo "You chose rootfs2"
        mkdir -p /mnt/rootfs2
        mount -t ext4 /dev/mmcblk0p3 /mnt/rootfs2
        chroot /mnt/rootfs2
        break
        ;;
    3)
        echo "You chose to stay in initramfs"
        break
        ;;
    *)
        echo "Invalid choice. Please choose again."
        ;;
esac

