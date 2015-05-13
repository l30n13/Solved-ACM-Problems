#include<stdio.h>
int main()
{
    int n,N[2000],count,i,j,temp;
    while(scanf("%d",&n)!=EOF)
    {
        count=0;
        for(i=0;i<n;i++)
            scanf("%d",&N[i]);
        for(i=0;i<n;i++)
            for(j=0;j<n-1;j++)
            {
                if(N[j]>N[j+1])
                {
                    temp=N[j];
                    N[j]=N[j+1];
                    N[j+1]=temp;
                    count++;
                }
            }
        printf("Minimum exchange operations : %d\n",count);
    }
    return 0;
}
