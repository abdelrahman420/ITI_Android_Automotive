
#!/bin/sh

mount -t devtmpfs dev /dev
echo "Select your desired booting option:"
echo "1) rootfs1"
echo "2) rootfs2"
echo "3) initRamfs"
read -r choice

case $choice in
    1)
        echo "You chose rootfs1"
	mkdir -p /mnt/rootfs1
        mount -t ext4 /dev/mmcblk0p2 /mnt/rootfs1
        chroot /mnt/rootfs1
        ;;
    2)	echo "You chose rootfs2"
        mkdir -p /mnt/rootfs2
        mount -t ext4 /dev/mmcblk0p3 /mnt/rootfs2
        chroot /mnt/rootfs2
        ;;
    3)
        echo "Resume in initRamfs"
        break
        ;;
    *)
        echo "Wrong selection"
        ;;
esac
