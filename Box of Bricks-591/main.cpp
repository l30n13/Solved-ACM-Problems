#include<stdio.h>
int main()
{
    int n,a[100],i,avg,sum,count=1;
    while(scanf("%d",&n)==1 && n!=0)
    {
        avg=0; sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        avg=sum/n;
        sum=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg)
            sum+=(a[i]-avg);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",count,sum);
        count++;
    }
    return 0;
}
