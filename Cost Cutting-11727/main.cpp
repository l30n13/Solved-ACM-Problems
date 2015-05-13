#include<stdio.h>
int main()
{
    long int cases,salary1,salary2,salary3,count;
    scanf("%ld",&cases); count=1;
    while(cases--)
    {
        scanf("%ld%ld%ld",&salary1,&salary2,&salary3);
        printf("Case %ld:",count); count++;
        if((salary1>salary2)&&(salary1<salary3)||(salary1<salary2)&&(salary1>salary3)) printf(" %ld\n",salary1);
        else if((salary2>salary1)&&(salary2<salary3)||(salary2<salary1)&&(salary2>salary3)) printf(" %ld\n",salary2);
        else if((salary3>salary2)&&(salary3<salary1)||(salary3<salary2)&&(salary3>salary1)) printf(" %ld\n",salary3);
    }
    return 0;
}
