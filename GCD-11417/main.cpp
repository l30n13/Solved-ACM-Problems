#include<stdio.h>
int GCD(int i,int j)
{
    int c;
    while(i!=0)
    {
        c=j%i;
        j=i;
        i=c;
    }
    return(j);
}

int main()
{
    int i,j,N;
    long int G;
    while(scanf("%d",&N)!=EOF)
    {
        if(N==0) break;
        G=0;
        for(i=1;i<N;i++)
        {
            for(j=i+1;j<=N;j++)
                G+=GCD(i,j);
        }
        printf("%ld\n",G);
    }
    return 0;
}
