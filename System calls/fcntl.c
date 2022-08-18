#include<stdio.h>
#include<fcntl.h>
void main()
{
    int fd=open("f1.txt",O_RDONLY|O_CREAT,0644);
    int fd2=fcntl(fd,F_DUPFD,0);
    while(1)
    {
        
    }

}