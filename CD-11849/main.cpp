#include<stdio.h>
int main()
{
    long long int m,n,i,j,k[100000],l[100000],count;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {
        if(m==0&&n==0) break;
        for(i=0;i<m;i++)
            scanf("%lld",&k[i]);
        for(i=0;i<n;i++)
            scanf("%lld",&l[i]);
        count=0;
        if(m>=n)
        {
            for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                {
                    if(k[i]==l[j])
                    count++;
                }
        }
        else if(n>=m)
        {
            for(i=0;i<n;i++)
                for(j=0;j<m;j++)
                {
                    if(l[i]==k[j])
                    count++;
                }
        }
        printf("%lld\n",count);
    }
    return 0;
}
