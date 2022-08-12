#include<stdio.h>
void main()
{
    int p[10],n,wt[10],bt[10],tat[10],prio[10],temp,count,tq,st[10],sq=0,i;
    int avgtat=0;
printf("enter number of process :");
    scanf("%d",&n);
printf("enter time quantam:");
    scanf("%d",&tq);
    for(int i=0;i<n;i++)
    {
        printf("enter the process name : ");
        scanf("%d",&p[i]);
        printf("enter burst time : ");
        scanf("%d",&bt[i]);
       st[i]=bt[i];
    }
    while(1)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp=tq;
            if(st[i]==0)
            {
                count++;
                continue;
            }
            if(st[i]>tq)
            {
                st[i]=st[i]-tq;
            }
            else{
                if(st[i]>=0)
                {
                    temp=st[i];
                    st[i]=0;
                }
            }
            sq=sq+temp;
            tat[i]=sq;
            avgtat=avgtat+tat[i];
        }
        if(n==count)
        {
            break;
        }
    }
    int avgwt=0;
    for(i=0;i<n;i++)
    {
        wt[i]=tat[i]-bt[i];
        avgwt=avgwt+wt[i];
    }
   printf("process\tbt\twt\ttat\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
     printf("avg wt %f ms\n avg tat  %f ms\n",avgwt/n,avgtat/n);
}