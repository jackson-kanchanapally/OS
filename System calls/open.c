#include <stdio.h>
#include <fcntl.h>

int err;
void main()
{
    int fd=open("f1.txt",O_RDONLY|O_CREAT);
    if(fd)
    {
        printf("%d",fd);
    }
    else{
        printf("error");
    }
}
