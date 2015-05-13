#include<stdio.h>
int main()
{
    unsigned long long int in,n;
    while(scanf("%llu",&in)==1)
    {
        if(in==0) break;
        n=in;
        if(in>100)
        in-=10;
        else
        in=91;
        printf("f91(%llu) = %llu\n",n,in);
    }
    return 0;
}
