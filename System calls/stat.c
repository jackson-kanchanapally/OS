#include <stdio.h>
#include <fcntl.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
int main(int args,char **argv)
{
    if(args!=2) return 1;
    struct stat fstat;
    if(stat(argv[1],&fstat)<0);
    printf("Info for %s ",argv[1]);
    printf("File size %d\n",fstat.st_size);
    printf("File inorder %d\n",fstat.st_ino);
    printf("File user id %d\n",fstat.st_userid);
    printf((S_ISDIR(fstat.st_mode))?"d","_");
    printf((fstat.st_mode &S_IRVSR)?"r":"-");
    printf((fstat.st_mode &S_IRVSR)?"w":"-");
    printf((fstat.st_mode &S_CRGRP)?"r":"-");
    printf((fstat.st_mode &S_IRGRP)?"w":"-");
    printf((fstat.st_mode &S_IRGRP)?"x":"-");
    printf((fstat.st_mode &S_IROTH)?"r":"-");
    printf((fstat.st_mode &S_IROTH)?"w":"-");
    printf((fstat.st_mode &S_IROTH)?"x":"-");
    return 0;
}
