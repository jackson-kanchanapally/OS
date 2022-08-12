#include <stdio.h>
void main()
{
    int p[10],wt[10],tat[10],bt[10],n,temp1,temp2;
    printf("enter number of process :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the process name : ");
        scanf("%d",&p[i]);
        printf("enter burst time : ");
        scanf("%d",&bt[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(bt[i]<bt[j])
            {
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
    for(int i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=wt[i]+bt[i];
        avgwt=avgwt+wt[i];
    }
    for(int i=0;i<n;i++)
    {
        avgtat=avgtat+tat[i];
    }
    printf("process\tbt\twt\ttat\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
}