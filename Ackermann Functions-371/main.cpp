#include <stdio.h>
int main()
{
    unsigned long long int i,j,n,ne,m,k,len,l,t,max_len;
    while(scanf("%llu%llu",&i,&j)!=EOF)
    {
        if(i==0&&j==0) break;
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
            do
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
            }while(k!=1);
            if(len>max_len)
            {
                ne=n;
                max_len=len;
            }
        }
        if(l<t) printf("Between %llu and %llu, %llu generates the longest sequence of %llu values.\n",l,t,ne,max_len-1);
        else printf("Between %llu and %llu, %llu generates the longest sequence of %llu values.\n",t,l,ne,max_len-1);
    }
    return 0;
}
