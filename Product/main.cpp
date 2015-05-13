#include<stdio.h>
#include<string.h>
int main()
{
    char in1[1000],in2[1000],ne[1000];
    int i,l1,l2,j;
    while(scanf("%s%s",in1,in2)!=EOF)
    {
        l1=strlen(in1);
        l2=strlen(in2);
        if(l1>l2)
        for(i=0,j=0;i<l1,j<l2;i++,j++)
        {
            ne[i]=(in1[i]-'0'*in2[j]-'0');
        }
        else if(l1<l2)
        for(i=0,j=0;i<l2,j<l1;i++,j++)
        {
            ne[j]=(in1[j]-'0')*(in2[i]-'0');
        }
        puts(ne);
    }
    return 0;
}
