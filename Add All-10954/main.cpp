#include<stdio.h>
int main()
{
    long long int cases,in[5005],sum[1],i,l;
    while(scanf("%lld",&cases)==1)
    {
        if(cases==0) break;
        for(i=0;i<cases;i++)
        scanf("%lld",&in[i]);
        l=0;
        for(i=0;i<cases-2;i++)
        {
            sum[0]=in[i]+in[i+1];
            in[i+2]+=sum[0]+in[i+2];
            l=in[i+2];
        }
        printf("%lld\n",l);

    }
    return 0;
}
