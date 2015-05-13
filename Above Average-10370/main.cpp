#include<stdio.h>
int main()
{
    int cases,students,numbers[1020],i,sum,b,avg;
    scanf("%d",&cases);
    while(cases--)
    {
        sum=0;b=0;
        scanf("%d",&students);
        for(i=0;i<students;i++)
        {
            scanf("%d",&numbers[i]);
            sum+=numbers[i];
        }
        avg=sum/students;
        for(i=0;i<students;i++)
        {
            if(numbers[i]>avg)
            b+=1;
        }
        printf("%.3f%%\n",(float)b/students*100);
    }
}
