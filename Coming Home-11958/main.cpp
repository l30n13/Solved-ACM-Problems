#include<stdio.h>
#include<stdlib.h>
int main()
{
    int cases,buses,h,h1,m,m1,m2,sum,high,count=1;
    char times[10],times1[10],c;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%d%s",&buses,times);
        high=0;
        sscanf(times,"%d%c%d",&h,&c,&m);
        while(buses--)
        {
            scanf("%s%d",times1,&m1);
            sscanf(times1,"%d%c%d",&h1,&c,&m2);
            if(h1<h)
                sum=(abs((h-h1)-24)*60)+(m+m1+m2);
            else
            sum=(abs(h1-h)*60)+(m+m1+m2);
            if(sum>high)
                high=sum;
        }
        printf("Case %d: %d\n",count,sum);
        count++;
    }
    return 0;
}
