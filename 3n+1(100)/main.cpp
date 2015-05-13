#include <stdio.h>
int main()
{
    int i,j,n,m,k,len,l,t,max_len;
    while(scanf("%d%d",&i,&j)!=EOF)
    {
        max_len=0;
        l=i;
        t=j;
        if(j<i)
        {
            m=i;
            i=j;
            j=m;
        }
    for(n=i;n<=j;n++)
    {
        len=1;
        k=n;
        while(k!=1)
        {
        if(k%2!=0)
        {
            k=3*k+1;
            len++;
        }
        else if(k%2==0)
        {
            k=k/2;
            len++;
        }
        }
        if(len>max_len)
        {
            max_len=len;
        }
    }
    printf("%d %d %d\n",l,t,max_len);
    }
    return 0;
}
