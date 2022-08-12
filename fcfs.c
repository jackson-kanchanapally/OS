#include <stdio.h>
void main()
{
    int bt[10],p[10],n,wt[10],tat[10];
    printf("ENter number of process :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the process name : ");
        scanf("%d",&p[i]);
        printf("enter burst time : ");
        scanf("%d",&bt[i]);
    }

    float avgwt=0,avgtat=0;
    wt[0]=0;
    tat[0]=bt[0];

    for(int i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];  //wt[0]+bt[0] = 0+24=24
        tat[i]=wt[i]+bt[i];
        avgwt=avgwt+wt[i];
    }

    for(int i=0;i<n;i++)
    {
        avgtat=avgtat+tat[i];
    }

    // for output

      printf("process\tbt\twt\ttat\n");

     for(int i=0;i<n;i++)
    {
    printf("%d\t%d\t%d\t%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    printf("avg wt %f ms\n avg tat  %f ms\n",avgwt/n,avgtat/n);
}