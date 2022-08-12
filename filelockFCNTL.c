#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main(int argc,char *argv)
{
char *file=argv[1];
int fd;
struct flock lock;
printf("opening file\n");
fd=open(file,O_WRONLY);
printf("locking");
memset(&lock,0,sizeof(lock));
lock.l_type=F_WRLCK;
fcntl (fd,F_SETKW,&lock);
printf("press enter \n");
getchar();
printf("unlocking");
lock.l_type=F_UNLCK;
fcntl (fd,F_SETLKW,&lock);
close(fd);
return 0;
}
