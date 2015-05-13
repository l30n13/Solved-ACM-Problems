#include<stdio.h>
#include<string.h>
int main()
{
    char input[1500];
    long long int i,l,odd_sum,even_sum,equal;
    while(scanf("%s",input)==1)
    {
        l=strlen(input);
        if(input[0]=='0'&&l<=1) break;

        odd_sum=0;even_sum=0;
        for(i=0;i<l;i++)
        {
            if(i%2==0)
                odd_sum+=input[i]-'0';
            else
                even_sum+=input[i]-'0';
        }
        equal=odd_sum-even_sum;
        if(equal%11==0)
            printf("%s is a multiple of 11.\n",input);
        else
            printf("%s is not a multiple of 11.\n",input);
    }
    return 0;
}
