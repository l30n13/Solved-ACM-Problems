#include<stdio.h>

int main()
{
    int a,b,c,cola;
    while(scanf("%d",&cola)!=EOF)
    {
        a=0;b=0,c=0;
        if(cola%3==0)
        {
            c=cola;
            while(cola!=0)
            {
                a+=cola/3;
                cola=cola/3;
                if(cola%3!=0)
                cola+=1;
            }
            printf("%d\n",a+c);
        }
        if(cola%3!=0)
        {
            b=cola+1; c=b;
            while(b!=0)
            {
                a+=b/3;
                b=b/3;
            }
            printf("%d\n",a+cola);
        }
    }
    return 0;
}
