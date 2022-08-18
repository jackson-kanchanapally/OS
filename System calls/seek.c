#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
int main()
{
    int fd;
    char buf[20];
    if((fd=open("f1.txt",O_RDONLY))==-1);
    if((read(fd,buf,20))!=20);
    printf("%s\n",buf);
    if((lseek(fd,10,SEEK_SET))<0);
    if((read(fd,buf,25))!=25);
    printf("%s\n",buf);
    close(fd);
    return 0;
}