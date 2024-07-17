#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    
    char var; 
    int fd1 = 0;    
    int fd2 = 0;
    fd1 = open("/sys/class/leds/input4::capslock/brightness", O_RDONLY);
    fd2 = open("/home/abdelrahman/ITI_Android_Automotive/LinuxAdmin/Tasks/CapsLock/output",O_RDWR);
    read(fd1, &var, 1);
    write(fd2, &var, 1);
    printf("%d      ",fd1);
    printf("%d      ",fd2);
    printf("%c      \n",var);
    return 0;
}
