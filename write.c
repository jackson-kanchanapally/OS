#include<stdio.h>
#include<fcntl.h>
#include<string.h>
int err;
void main()
{
int s;
int fd=open("j.txt",O_WRONLY|O_CREAT|O_TRUNC,0664);
if(fd==-1)
{
    printf("error");
}
else{
    printf("%d\n",fd);
    s=write(fd,"hello linux",strlen("hello linux"));
    printf("size =%d\n",s);
    close(fd);
}
}