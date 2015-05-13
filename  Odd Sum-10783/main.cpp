#include<stdio.h>
int main()
{
    long int a,b,c,i,count,ca=1;
    scanf("%ld",&count);
    while(count--)
    {
        scanf("%ld%ld",&a,&b);
        c=0;
        for(i=a;i<=b;i++)
        {
            if(i%2!=0)
            {
                c+=i;
            }
        }
        printf("Case %d: %ld\n",ca,c);
        ca++;
    }
    return 0;
}
