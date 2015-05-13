#include<stdio.h>
long long fib(long long f);
int main()
{
    long long int f;
    while(scanf("%lld",&f)==1)
    {
        printf("%lld\n",fib(f));
    }
    return 0;
}
long long fib(long long f)
{
    if(f==0) return 0;
    if(f==1) return 1;
    return fib(f-1)+fib(f-2);
}
