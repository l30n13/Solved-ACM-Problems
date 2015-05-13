#include<stdio.h>
#include<string.h>
int main()
{
    char input[100];
    int sum,i,length;
    while(scanf("%s",input)!=EOF)
    {
        sum=0;
        length=strlen(input);
        for(i=0;i<length;i++)
        {
            if(input[i]>=97&&input[i]<=122)
                sum+=input[i]-96;
            if(input[i]>=65&&input[i]<=90)
                sum+=input[i]-38;
        }

        for(i=2;i<=sum;i++)
        {
            if(sum%i==0)
            {
                if(sum==i)
                {
                    printf("It is a prime word.\n");
                    break;
                }
                else
                {
                    printf("It is not a prime word.\n");
                    break;
                }
            }
        }
    }
    return 0;
}
