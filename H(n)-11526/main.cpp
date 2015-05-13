#include <stdio.h>
#include <math.h>
int N;
long long int H()
{
    if(N<=0) return 0;
    long long int ans=0;
    int i,lt;
    for(i=1, lt=sqrt(N);i<=lt;i+=1)
    ans+=(N/i);
    ans=2*ans-(lt*lt);
    return ans;

}
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        printf("%lld\n",H());
    }
    return 0;
}
