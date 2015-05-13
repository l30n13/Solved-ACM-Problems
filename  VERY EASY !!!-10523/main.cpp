#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,i,sum;
    while(scanf("%d%d",&n,&a)!=EOF)
    {
        i=1; sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=(i*pow(a,i));
        }
        printf("%d\n",sum);
    }
    return 0;
}
