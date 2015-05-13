#include<stdio.h>
int main()
{
    unsigned long long int input,f,f1,f2,i,fibonacci[5002]={0,1,1};
    while(scanf("%llu",&input)==1)
    {
        f1=1;f2=1;
        for(i=3;i<=input;i++)
        {
            f=f1+f2;
            f1=f2;
            f2=f;
            fibonacci[i]=f;
        }
        printf("The Fibonacci number for %llu is %llu\n",input,fibonacci[input]);
    }
    return 0;
}
