#include<stdio.h>
int main()
{
    unsigned long long int a,b,i,B,P,M;
    while(scanf("%lld%lld%lld",&B,&P,&M)!=EOF)
    {
        b=1;
        for(i=0;i<P;i++)
            b*=B;
        a=b%M;
        printf("%lld\n",a);
    }
}
