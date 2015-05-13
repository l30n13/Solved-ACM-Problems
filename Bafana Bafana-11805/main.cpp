#include<stdio.h>
int main()
{
    int N,K,P,n,i,ans;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&N,&K,&P);
        ans=K+P;
        while(ans>N)
        ans-=N;
        printf("Case %d: %d\n",i,ans);
    }
    return 0;
}
