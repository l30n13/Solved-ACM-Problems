#include<stdio.h>
#include<string.h>

char rev(char *in,char *out)
{
    int i,j=0,l;
    l=strlen(in)-1;
    for(i=0;i<=l;i++)
        out[i]=in[l-i];
    out[i]='\0';
}
int add(char *in,char *out,char *sum_main)
{
    int extra,i,l,sum;
    char sum1[1000];
    l=strlen(in);
    for(i=0,extra=0;i<l;i++)
    {
        sum=(in[i]-'0')+(out[i]-'0')+extra;
        sum_main[i]=sum%10+'0';
        extra=sum/10;
    }
    if(extra!=0)
        sum_main[i++]=extra+'0';
    sum_main[i]='\0';
    strcpy(sum1,sum_main);
    rev(sum1,sum_main);
}
int main()
{
    char p[1000],revs[1000],sum[1000];
    int n,i,j,k,l,cont;
    scanf("%d",&n);
    cont=1;
    while(cont<=n)
    {
        k=0;
        j=0;
        gets(p);
        l=strlen(p);
        if(l==0)
            continue;
        while(j!=l)
        {
            k++;
            rev(p,revs);
            add(p,revs,sum);
            l=strlen(sum);
            rev(sum,p);
            for(i=0;i<l;i++)
            {
                if(sum[i]==p[i])
                    j++;
                else
                {
                    j=0;
                    break;
                }
            }
        }
        printf("%d %s\n",k,sum);
        cont++;
    }
    return 0;
}
