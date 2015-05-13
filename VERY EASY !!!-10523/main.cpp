#include<stdio.h>
#include<math.h>
int main()
{
    float n,a,i,sum;
    while(scanf("%f%f",&n,&a)!=EOF)
    {
        i=1; sum=0;
        for(i=1;i<=n;i++)
        {
            sum+=(i*pow(a,i));
        }
        printf("%f\n",sum);
    }
    return 0;
}
