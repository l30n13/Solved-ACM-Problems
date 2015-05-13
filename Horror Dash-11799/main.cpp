#include<stdio.h>
int main()
{
    int N,i,cases,big_number,count=1;
    char space;
    scanf("%d",&cases);
    while(cases--)
    {
        big_number=0;
        while(1)
        {
            scanf("%d",&N);
            if(N>big_number)
            big_number=N;
            scanf("%c",&space);
            if(space!=' ')
            break;
        }
        printf("Case %d: %d\n",count,big_number);
        count++;
    }
    return 0;
}
