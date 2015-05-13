#include <stdio.h>
int main()
{
    int n,i;
    long long int sum;
    while((scanf("%d",&n)==1))
    {
        sum=1;
        if(n<8&&n>0)
            printf("Underflow!\n");
        else
            if(n>13)
                printf("Overflow!\n");

        else
            if(n>=8&&n<=13)
            {
                for(i=n;i>=1;i--)
                {
                    sum=sum*i;
                }
                printf("%lld\n",sum);
            }
        else
            if(n<=0)
            {
                if(n%2==0)
                    printf("Underflow!\n");
                else
                    printf("Overflow!\n");
            }
    }

    return 0;
}
