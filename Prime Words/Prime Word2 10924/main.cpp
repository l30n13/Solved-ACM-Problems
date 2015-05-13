#include<stdio.h>
#include<string.h>
int main()
{
    char input[1000];
    int b=0,sum,i,length;
    while(scanf("%20s",input)==1)
    {
        sum=0;
        length=strlen(input);
        for(i=0;i<=length;i++)
        {
            if(input[i]>=97&&input[i]<=122)
                sum+=input[i]-96;
            if(input[i]>=65&&input[i]<=90)
                sum+=input[i]-38;
        }

        for(i=1;i<=sum;i++)
        if(sum%i==0)
            b+=1;
        if(b<=2)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
