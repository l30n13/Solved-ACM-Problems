#include <stdio.h>
int main()
{
    int a,b,c=1;
    scanf("%d %d",&a,&b);
    while(a||b)
    {
        printf("Case %d: %llu\n",c++,((unsigned long long int)a*(a-1)/2*b*(b-1)/2));
        scanf("%d %d",&a,&b);
    }
    return 0;
}
