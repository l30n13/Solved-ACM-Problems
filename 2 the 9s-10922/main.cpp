#include<stdio.h>
int main()
{
    char input[1005];
    long int i,a,sum;
    while(scanf("%s",input)!=EOF)
    {
        if(input[0]=='0') break;
        sum=0;
        for(i=0;input[i]!='\0';i++)
            sum+=input[i]-'0';
        if(sum%9==0)
        {
            i=1;
            while(sum!=9&&sum>9)
            {
                a=0;
                while(sum!=0)
                {
                    a+=sum%10;
                    sum/=10;
                }
                sum=a;
                i++;
            }

            printf("%s is a multiple of 9 and has 9-degree %ld.\n",input,i);
        }
        else
            printf("%s is not a multiple of 9.\n",input);
    }
    return 0;
}
