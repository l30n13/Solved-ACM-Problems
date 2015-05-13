#include<stdio.h>
int main()
{
    long int n,i,j,l,b=0,o,m,k[2],prime[100000];
    while(scanf("%ld",&n))
    {
        o=0;
        for(i=1;i<=n;i++)
        {
            for(l=1;l<=i;l++)
                if(i%l==0)
                    b=b+1;
                if(b<=2)
                    prime[o]=i;o++;
                b=0;
        }
        m=0;
        for(i=0;i<o;i++)
        {
            for(j=1;j<=o;j++)
                if(n==(prime[i]+prime[j]))
                    if(m>prime[j]-prime[i])
                    {
                        m=prime[j]-prime[i];
                        k[0]=prime[i];
                        k[1]=prime[j];
                    }
        }
        printf("%ld = %ld + %ld\n",n,k[1],k[0]);
    }
    return 0;
}
