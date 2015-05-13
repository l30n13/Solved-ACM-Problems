#include<stdio.h>
int main()
{
    int e,f,c,m=0;
    int t,n=0;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&e,&f,&c);
        n=e+f;
        while(n>=c)
        {
            m+=(n/c);
            n=(n/c)+(n%c);
        }
        printf("%d\n",m);
        m=0;
    }
    return(0);
}
