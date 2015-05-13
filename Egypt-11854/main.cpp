#include<stdio.h>
int main()
{
    long long int in[3],ne[2],i,j,k,l;
    while(scanf("%lld%lld%lld",&in[0],&in[1],&in[2])!=EOF)
    {
        if(in[0]==0&&in[1]==0&in[2]==0)break;
        j=1;l=0;
        for(i=0;i<3;i++)
        {
            if(in[i]>=j)
            {
                j=in[i];
                k=i;
            }
        }
        for(i=0;i<3;i++)
        {
            if(j>in[i])
            {
                ne[l]=in[i];
                l++;
            }
        }
        if(j*j==(ne[0]*ne[0]+ne[1]*ne[1]))
        printf("right\n");
        else
        printf("wrong\n");
    }
    return 0;
}
