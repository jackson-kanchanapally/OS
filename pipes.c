#include <stdio.h>
#include <unistd.h>
#include <string.h>
char *msg="greab the op";
int main()
{
    char buf[1024];
    int fd[2];
    pipe(fd);

    if(fork()!=0)
    {
        close(fd[0]);
        write(fd[1],msg,strlen(msg));
    }

    else{
        close(fd[1]);
        read(fd[0],buf,1024);
        printf("got this from writer %d\n",buf);
    }

    return 0;
}