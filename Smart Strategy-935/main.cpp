#include<stdio.h>
int main()
{
    long int n,m;
    while(scanf("%ld%ld",&n,&m)!=EOF)
    {
        printf("%ld\n",n-m);
    }
    return 0;
}
