#include <stdio.h>
#include <stdlib.h>
int mutex=1,full=0,empty=3,x;

void pro()
{
    mutex=wait(mutex);
    full=signal(full);
    empty=wait(empty);
    x++;
    printf("produce %d\n",x);
    mutex=signal(mutex);
}

int wait(int s) 
{
return --s;
}

int signal(int s)
{
    return ++s;
}

void con()
{
    mutex=wait(mutex);
    full=wait(full);
    empty=signal(empty);
    printf("consumes %d\n",x);
    --x;
    mutex=signal(mutex);
}

void main()
{
    int n;
    printf("1.p\n2.c\n3.exit\n");
    while(1)
    {
        scanf("%d",&n);
        switch(n)
        {
            case 1:
                if((mutex==1)&&(empty!=0))
                {
                    pro();
                }
                else{
                    printf("buffer is full\n");
                }
                break;
            case 2 :
                if((mutex==1)&&(full!=0))
                {
                    con();
                }
                else{
                    printf("buffer is empty\n");
                }
                break;
            case 3 :
                exit(0);
                break;
        }
    }
}