#include<stdio.h>
int main()
{
    unsigned long long int i;
    while(scanf("%llu",&i)==1)
    {
        printf("%llu\n",3*((i+1)*(i+1)/2-3));
    }
    return 0;
}
