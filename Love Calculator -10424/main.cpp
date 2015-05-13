#include<stdio.h>
#include<string.h>
int main()
{
    char name1[25],name2[25];
    int i,length1,length2;
    float s1,s2,ratio;
    while(scanf("%s%s",name1,name2)!=EOF)
    {
        int sum1=0,sum2=0;
        length1=strlen(name1);
        length2=strlen(name2);
        for(i=0;i<length1;i++)
        {
            if(name1[i]>=97&&name1[i]<=122)
            sum1+=name1[i]-96;
            if(name1[i]>=65&&name1[i]<=90)
            sum1+=name1[i]-64;
        }
        for(i=0;i<length2;i++)
        {
            if(name2[i]>=97&&name2[i]<=122)
            sum2+=name2[i]-96;
            if(name2[i]>=65&&name2[i]<=90)
            sum2+=name2[i]-64;
        }
        while(sum1>9)
        {
            int a,b;
            a=sum1%10;
            b=sum1/10;
            sum1=a+b;
        }
        while(sum2>9)
        {
            int a,b;
            a=sum2%10;
            b=sum2/10;
            sum2=a+b;
        }
        s1=sum1; s2=sum2;
        if(s1==0&&s2==0){printf("\n"); continue;}
        if(s1>s2) ratio=s2/s1;
        else ratio=s1/s2;
        printf("%.2f %%\n",ratio*100);
    }
    return 0;
}
