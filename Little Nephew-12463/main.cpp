#include<stdio.h>
int main()
{
    long long int a,b,c,d,e;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e)!=EOF)
    {
        if(a==0&&b==0&&c==0&&d==0&&e==0) break;
        printf("%lld\n",a*b*c*d*d*e*e);
    }
    return 0;
}
