#include<stdio.h>
int main()
{
    int cases,count,i,N,n[20];
    cases=1;
    scanf("%d",&count);
    while(count--)
    {
        scanf("%d",&N);
        for(i=0;i<N;i++)
            scanf("%d",&n[i]);
        printf("Case %d: %d\n",cases,n[N/2]);
        cases++;
    }
    return 0;
}
