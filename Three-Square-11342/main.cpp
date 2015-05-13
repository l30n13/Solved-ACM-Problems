#include<stdio.h>
int main()
{
    long int N,K,i,j,k,l,c;
    scanf("%ld",&N);
    while(N--)
    {
        scanf("%ld",&K);
        l=K/3;
        c=0;
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                for(k=0;k<l;k++)
                {
                    if((i*i+j*j+k*k)==K)
                    {
                        c++;
                        break;
                    }
                }
                if(c!=0)
                    break;
            }
            if(c!=0)
                    break;
        }
        if(c==0)
        printf("-1\n");
        else
        printf("%ld %ld %ld\n",i,j,k);
    }
    return 0;
}
