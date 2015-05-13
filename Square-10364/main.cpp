#include<stdio.h>
int main()
{
    long int first,number,input[50],again[50];
    while(scanf("%ld",&first)==1)
    {
        long int i,j;
        for(i=0;i<first;i++)
        {
            scanf("%ld",&number);
            if(number>=4||number<=20)
            for(j=0;j<number;j++)
                scanf("%ld",&input[j]);
            int l=0,n=0,m=1;
            for(j=0;j<number;j++)
            {
                if(l>number&&m>number)
                    break;
                else
                {
                    again[j]=input[l]+input[m];
                    l+=2; m+=2; n++;
                }
            }
            int o=0;m=1;
            for(j=0;j<n;j++)
            {
                if(m<n)
                {
                    if(again[j]==again[j+1])
                        m++;
                    else
                        o++;
                }
            }
            if(o<m)
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}
