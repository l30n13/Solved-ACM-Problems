#include<stdio.h>
int go(int a,int b,int n);
int main()
{
    int p,q,n,i,a,b,c;
    while(1)
    {
        scanf("%d",&p);scanf("%d",&q);if(p==0&&q==0)break;scanf("%d",&n);
        for(i=1;i<=q;i++)
        {
            if(q%i==0)
            {
                if(p==(q/i+i))
                {
                    a=i;
                    b=q/i;
                    break;
                }
            }
        }
        c=go(a,b,n);
        printf("%d\n",c);
    }
    return 0;
}
int go(int a,int b,int n)
{
    int m=1,o=1,j=0;
    while(j<n)
    {
        m*=a;
        o*=b;
        j++;
    }
    return(m+o);
}
