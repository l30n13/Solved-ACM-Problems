#include<stdio.h>
#include<math.h>
long BigMod(long b,long p,long m);
int main()
{
    long B,P,M,ans;
    while(scanf("%ld%ld%ld",&B,&P,&M)!=EOF)
    {
        ans=BigMod(B,P,M);
        printf("%ld\n",ans);
    }
    return 0;
}
long BigMod(long b,long p,long m)
{
    long r;
    if(p==0)
        return 1;
    else
        if(p%2==0)
        {
            r=BigMod(b,p/2,m);
            return (r*r)%m;
        }
        else
            return ((b%m)*BigMod(b,p-1,m))%m;
}
