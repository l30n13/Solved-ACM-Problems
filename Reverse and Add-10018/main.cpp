#include<stdio.h>
int main()
{
    long int p,q,r,s,t;
    int n,i,j,k;
    scanf("%d",&n);
    while(n--)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld",&p);
            s=0;
            k=0;
            q=p;
            while(q!=s)
            {
                r=0;
                t=p;
                while(p!=0)
                {
                    r+=p%10;
                    r*=10;
                    p=p/10;
                }
                p=r/10;
                p+=t;
                q=p;
                k++;
                r=0;
                while(p!=0)
                {
                    r+=p%10;
                    r*=10;
                    p=p/10;
                }
                s=r/10;
                p=s;
            }
            printf("%d %ld\n",k,q);
        }
    }
    return 0;
}
