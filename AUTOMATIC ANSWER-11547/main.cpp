#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int t,n,temp,ans;
    while(scanf("%lld",&t)!=EOF)
    {
        while(t--)
        {
            scanf("%lld",&n);
            temp=abs((((((n*567)/9)+7492)*235)/47)-498);
            ans=(temp/10)%10;
            printf("%lld\n",ans);
        }
    }
    return 0;
}
