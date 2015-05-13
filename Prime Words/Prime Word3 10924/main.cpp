#include <stdio.h>
#include <string.h>
int main()
{
    char b[100],a[]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int i,flag,b_l,j,sum;
    while(scanf("%s",b)!=EOF)
    {
        b_l=strlen(b);
        sum=0;
        for(i=0;i<b_l;i++)
        {
            for(j=0;j<52;j++)
            {
                if(b[i]==a[j])
                {
                    sum=sum+j+1;
                }
            }
        }
        flag=1;
        for(i=2;i<sum;i++)
        {
            if(sum%i==0)
            {
                flag=0;
                printf("It is not a prime word.\n");
                break;
            }
        }
        if(flag==1)
        {
            printf("It is a prime word.\n");
        }
    }
    return 0;
}
