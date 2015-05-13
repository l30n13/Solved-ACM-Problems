#include<stdio.h>
int main()
{
    long int cases,sum,i,j,k;
    while(scanf("%ld",&cases)==1)
    {
        sum=0;j=0;
        k=cases;
        for(i=0;i<k;i++)
        {
            if(cases%3==0)
            {
                while(cases!=0||cases==1)
                {
                    sum+=cases%3;
                    cases/=3;
                }
            }
            else if(cases%3!=0)
            {
                while(cases!=0)
                {
                    sum+=cases%3;
                    cases/=3;
                    j++;
                }
            }
        }
        sum+=j;
        printf("%ld\n",sum);
    }
    return 0;
}
