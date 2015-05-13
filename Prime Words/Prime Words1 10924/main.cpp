#include<stdio.h>
#include<string.h>
int main()
{
    char s_letter[26],c_letter[26],ne[2000];
    int i,j,c=65,s=97,N[20],L,sum=0;
    for(i=0;i<26;i++)
    {
        s_letter[i]=s;
        s++;
        c_letter[i]=c;
        c++;
    }
    while(scanf("%20s",ne)!=EOF)
    {
        L=strlen(ne);
        for(i=0;i<26;i++)
            for(j=0;j<L;j++)
            {
                if(s_letter[i]==ne[j])
                    N[j]=s_letter[i]-96;
                if(c_letter[i]==ne[j])
                    N[j]=c_letter[i]-38;
            }
        for(i=0;i<L;i++)
            sum+=N[i];
        for(i=2;i<=sum;i++)
        {
            if(sum%i==0)
            {
                if(i==sum)
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
