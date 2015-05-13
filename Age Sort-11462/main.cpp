#include<stdio.h>
int main()
{
    int i,j,cases,input[20000],uper[20000],c;
    while(scanf("%d",&cases)==1)
    {
        if(cases==0) break;
        for(i=0;i<cases;i++)
            scanf("%d",&input[i]);
        c=0;
        for(i=0;i<cases;i++)
        {
            if(input[i]>c)
            c=input[i];
        }
        int a=0,l=0;
        for(j=0;j<20000;j++)
        {
            for(i=0;i<cases;i++)
            {
                if(input[i]==c-l)
                {
                    uper[a]=input[i];
                    a++;
                }
            }
            l++;
        }
        for(i=0;i<cases;i++)
        printf("%d ",uper[cases-1-i]);
        printf("\n");
    }
    return 0;
}
