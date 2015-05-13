#include<stdio.h>
int main()
{
     int line,i,pest=0,cases=1;

    while((scanf("%d",&line)==1) && (line>0))
    {
        for(i=2;i<=line;i*=2,pest++);
        if(line-i/2)
        pest++;
        printf("Case %d: %d\n",cases++,pest);
        pest=0;
    }
    return(0);
}
