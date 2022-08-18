#include <stdio.h>
#include <fcntl.h>
#include<unistd.h>
#include<stdlib.h>
int err;
int main()
{
    char *c=(char*)calloc(100,sizeof(char));
    int fd=open("f1.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("error");
    }
    else{
        int s=read(fd,c,15);
        printf("%d size = %d\n",fd,s);
        c[s]='\0';
        printf("Those bytes are %s",c);

    }
    return 0;
}