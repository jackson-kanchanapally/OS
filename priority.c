#include<stdio.h>
void main()
{
int p[10],n,wt[10],bt[10],tat[10],prio[10],temp,temp1,temp2;
printf("enter number of process :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the process name : ");
        scanf("%d",&p[i]);
        printf("enter burst time : ");
        scanf("%d",&bt[i]);
        printf("enter priority : ");
        scanf("%d",&prio[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(prio[i]<prio[j])
            {
                temp=prio[i];
                prio[i]=prio[j];
                prio[j]=temp;

                temp1=bt[i];
                bt[i]=bt[j];
                bt[j]=temp1;

                temp2=p[i];
                p[i]=p[j];
                p[j]=temp2;
            }
        }
    }
    float avgwt=0,avgtat=0;
    wt[0]=0;
    tat[0]=bt[0];
    for(int i=0;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=tat[i-1]+bt[i];
        avgwt=avgwt+wt[i];
    }
    for(int i=0;i<n;i++)
    {
        avgtat=avgtat+tat[i];
    }
    printf("process\tpriority\tbt\twt\ttat\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\n",p[i],prio[i],bt[i],wt[i],tat[i]);
    }
     printf("avg wt %f ms\n avg tat  %f ms\n",avgwt/n,avgtat/n);
}