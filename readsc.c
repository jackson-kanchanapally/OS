#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
int err;
int main()
{
    int s;
    char *c=(char*)calloc(100,sizeof(char));
    int fd=open("jack.txt",O_RDONLY);
    if(fd==-1)
    {
        printf("error %d",err);
    }
    else{
        printf("%d\n",fd);
        s=read(fd,c,15);
        printf("%d size=%d\n",fd,s);
        c[s]='\0';
        printf("Those bytes are %s",c);
        
    }
        return 0;
}
