#include<stdio.h>

int main()
{
    int a,b[1000],i,j,c;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0) break;
        c=0;
        for(i=0;a!=0;i++)
        {
            b[i]=a%2;
            a=a/2;
        }
        for(j=0;j<i;j++)
        {
            if(b[j]==1)
            c++;
        }
        printf("The parity of ");
        for(j=0;j<i;j++)
            printf("%d",b[i-1-j]);
        printf(" is %d (mod 2).",c);
        printf("\n");
    }
    return 0;
}
