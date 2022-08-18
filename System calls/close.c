#include <stdio.h>
#include<fcntl.h>
int err;
void main()
{
    int fd=open("f1.txt",O_RDONLY|O_CREAT);
    if(fd==-1)
    printf("error");
    else{
        if(close(fd==-1))
        {
            printf("not closed");
        }
        else{
            printf("closed");
        }
    }
}