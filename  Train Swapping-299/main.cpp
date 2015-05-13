#include<stdio.h>
int main()
{
    int cases,N,l[50],count,i,j,temp;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%d",&N);
        count=0;
        for(i=0;i<N;i++)
            scanf("%d",&l[i]);
        for(i=0;i<N;i++)
            for(j=0;j<N-1;j++)
            {
                if(l[j]>l[j+1])
                {
                    temp=l[j];
                    l[j]=l[j+1];
                    l[j+1]=temp;
                    count++;
                }
            }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
