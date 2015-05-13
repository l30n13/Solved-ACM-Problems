#include<stdio.h>
int main()
{
    long long int fibonacci[22000],input,i,j,f,f1,f2;
        f1=1;f2=1;
        for(i=1;i<=22000;i++)
        {
            f=f1+f2;
            f1=f2;
            f2=f;
            for(j=2;j<=f;j++)
            {
                if(f%j==0)
                {
                    if(f==j)
                        fibonacci[i]=f;
                    else
                    {i--;break;}
                }
            }
        }
    while(scanf("%lld",&input))
    {
        printf("%lld\n",fibonacci[input]);
    }
    return 0;
}
