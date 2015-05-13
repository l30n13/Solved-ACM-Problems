#include<stdio.h>
int main()
{
    long long int army1,army2;
    while(scanf("%lld%lld",&army1,&army2)!=EOF)
    {
        if(army1>army2)
        printf("%lld\n",army1-army2);
        else
        printf("%lld\n",army2-army1);
    }
    return 0;
}
