#include<stdio.h>
int main()
{
    long int humble[10000]={1},in,i,j,m=1;
    for(i=2;i<100000;i++)
        {
            if(i%2==0||i%3==0||i%5==0||i%7==0)
            if(i/2==0||i/2==2||i/2==3||i/2==5||i/2==7||i/3==2||i/3==0||i/3==3||i/3==5||i/3==7||i/5==2||i/5==3||i/5==0||i/5==5||i/5==7||i/7==2||i/7==3||i/7==5||i/7==0||i/7==7)
            {humble[m]=i; m++;}
        }
    while(scanf("%d",&in)==1)
    {
        printf("%ld\n",humble[in-1]);
    }
    return 0;
}
