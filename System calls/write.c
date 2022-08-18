#include <stdio.h>
#include<fcntl.h>
#include<string.h>
int err;
int main()
{
    int fd=open("f2.txt",O_WRONLY|O_CREAT|O_TRUNC,0644);
    if(fd==-1)
    printf("error");

    else{
        int s=write(fd,"HELLO JACKS",strlen("HELLO JACKS"));
        printf("size=%d\n",s);
        close(fd);
    }
    return 0;
}