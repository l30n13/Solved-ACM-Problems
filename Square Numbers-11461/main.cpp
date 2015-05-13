#include<stdio.h>
#include<math.h>
int main()
{
    long long int num1,num2,sqr,i,count;
    while(scanf("%lld%lld",&num1,&num2)!=EOF)
    {
        if(num1==0&&num2==0) break;
        count=0;
        for(i=num1;i<=num2;i++)
        {
            sqr=sqrt(i);
            if(i==sqr*sqr)
                count+=1;
        }
        printf("%lld\n",count);
    }
    return 0;
}
