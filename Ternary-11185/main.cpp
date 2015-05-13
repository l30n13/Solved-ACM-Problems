#include<stdio.h>
int main()
{
    int d,dec,i,j,dec1[10000];
    while(scanf("%d",&dec)==1)
    {
        if(dec<0) break;
        d=dec;
        for(i=0;i<d;i++)
        {
            if(dec==0) break;
            else
            {
                dec1[i]=dec%3;
                dec/=3;
                j=i;
            }
        }
        for(i=0;i<=j;i++)
            printf("%d",dec1[j-i]);
        printf("\n");
    }
    return 0;
}
