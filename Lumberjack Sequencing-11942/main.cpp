#include<stdio.h>
int main()
{
    int n,N[10],count,i,j,temp,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        count=0;
        for(i=0;i<10;i++)
            scanf("%d",&N[i]);
        if(k==0) printf("Lumberjacks:\n");
        for(j=0;j<9;j++)
            if(N[j]>N[j+1])
            {
                if(j==8)
                {
                    printf("Ordered\n");
                    count=1;
                }
            }
            else break;
        if(count==0)
        for(j=0;j<9;j++)
            if(N[j]<N[j+1])
            {
                if(j==8)
                {
                    printf("Ordered\n");
                    count=1;
                }
            }
            else break;
        if(count==0)
        printf("Unordered\n");
    }
    return 0;
}
