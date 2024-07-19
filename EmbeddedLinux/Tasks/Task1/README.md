## steps to run this script on qemu

### 1-make image file of this script 
```bash
sudo mkimage -A arm -T script -C none -n 'My Script' -d ~/sdcard/boot/script.txt ~/sdcard/boot/script.img
```
### 2-open qemu
```bash
sudo qemu-system-arm -M vexpress-a9 -nographic -sd ~/sdcard/sd.img -net tap,script=./qemu-ifup.sh -net nic -kernel ~/Uboot/u-boot/u-boot
```
### 3- load the image to memory
```
fatload mmc 0:1 0x62000000 script.img
```
you  can create a variable and run it each time you want to load it to memory 
``` 
setenv Loadscript fatload mmc 0:1 0x62000000 script.img
saveenv
run Loadscript
```
### 4-run the imagefile
we will do the same steps and make variable for that
```
setenv Runscript source 0x62000000
saveenv 
run Runscript
```

