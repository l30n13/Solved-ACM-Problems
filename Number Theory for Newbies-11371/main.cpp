#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long int in,m,n,i;
    while(scanf("%llu",&in)==1)
    {
        m=in;n=0;
        do
        {
            n+=m%10;
            m/=10;
            if(m!=0)n*=10;
        }while(m!=0);
        if(n>in)
        printf("%llu - %llu = %llu = 9 * %llu\n",n,in,n-in,(n-in)/9);
        else
        printf("%llu - %llu = %llu = 9 * %llu\n",in,n,in-n,(in-n)/9);
    }
    return 0;
}
