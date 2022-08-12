#include<stdio.h>
#include<fcntl.h>
int err;
void main()
{
int fd=open("jack.txt",O_RDONLY|O_CREAT);
if(fd==-1)
{
    printf("Error %d",err);
    perror("program");
}
else
    printf("%d",fd);
}