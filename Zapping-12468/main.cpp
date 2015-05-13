#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b))
    {
        if(a<0&&b<0) break;
            c=abs(a-b);
        if(c>=50)
        c=100-c;
        printf("%d\n",c);
    }
    return 0;
}
