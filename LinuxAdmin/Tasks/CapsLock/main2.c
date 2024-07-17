#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd3 = 0;
    int fd4= 0;
    char var2;
    fd3 = open("output",O_RDWR);
    fd4 = open("/sys/class/leds/input4::capslock/brightness", O_RDWR);
    read(fd3,&var2,1);
    char toWrite;
    if(var2 == '0')
    {
        toWrite = '1';
    }
    else if(var2 == '1')
    {
        toWrite= '0';
    }
    else
    {

    }
    write(fd4,&toWrite,1);

}

