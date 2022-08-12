#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
int main()
{
    DIR*d;
    struct dirent *dir;
    d=opendir(".");
    if(d)
    {
        while((dir=readdir(d)!=NULL))
        {
            printf("%s\n",dir->d_name);
        }
        close(d);
    }
    return 0;
}