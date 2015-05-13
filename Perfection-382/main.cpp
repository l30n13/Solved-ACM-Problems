#include<stdio.h>
int main()
{
    long long int a,i,sum,k=0;
    while(scanf("%lld",&a)!=EOF)
    {
        if(a==0)
            {printf("END OF OUTPUT\n"); break;}
        sum=0;
        if(k==0)
        {
            printf("PERFECTION OUTPUT\n");
            k++;
        }
        for(i=1;i!=a;i++)
        {
            if(a%i==0)
            sum+=i;
        }
        if(sum==a)
            printf("%5lld  PERFECT\n",a);
        if(sum>a)
            printf("%5lld  ABUNDANT\n",a);
        if(sum<a)
            printf("%5lld  DEFICIENT\n",a);

    }
    return 0;
}
