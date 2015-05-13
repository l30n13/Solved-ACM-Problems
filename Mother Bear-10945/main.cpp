#include<stdio.h>
#include<string.h>
int main()
{
    char input[1000],copy[1000];
    int i,j,l,m;
    while(gets(input))
    {
        m=-1; j=0;
        l=strlen(input);
        if(l==4 && input[0]=='D' && input[1]=='O' && input[2]=='N' && input[3]=='E')
        break;
        for(i=0;i<l;i++)
        {
            if(input[i]!='.' && input[i]!=',' && input[i]!='?' && input[i]!='!' && input[i]!=' ')
            {
                m++;
                copy[m]=input[i];
            }
        }
        for(i=0;i<=m;i++)
        {
            if(copy[i]!=copy[m-i]&&copy[i]!=copy[m-i]+32&&copy[i]!=copy[m-i]-32)
            {
                j=1;
                printf("Uh oh..\n"); break;
            }
        }
        if(j==0) printf("You won't be eaten!\n");
    }
    return 0;
}
