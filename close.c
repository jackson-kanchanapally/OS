#include<stdio.h>
#include<fcntl.h>
int err;
void main()
{
    int fd=open("jack.txt",O_RDONLY|O_CREAT);
    if(fd==-1)
    {
        printf("error");
    }
    else{
        if(close(fd==-2))
        {
            printf("not closed");
        }
        else{
            printf("closed");
        }
    }
}