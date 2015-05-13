#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,l1,m,cases,n;
    char inputs[1000], button[9][5]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"," "};
    while(scanf("%d",&cases)==1)
    {
        n=1;
        while(n<=cases)
        {
            gets(inputs);
            l=strlen(inputs);
            if(l==0)continue;
            m=0;
            for(i=0;i<l;i++)
            {
                for(j=0;j<11;j++)
                {
                    l1=strlen(button[j]);
                    for(k=0;k<l1;k++)
                    {
                        if(inputs[i]==button[j][k])
                        {
                            if(k==0) m++;
                            if(k==1) m+=2;
                            if(k==2) m+=3;
                            if(k==3) m+=4;
                        }
                    }
                }
            }
            printf("Case #%d: %d\n",n,m);
            n++;
        }
    }
    return 0;
}
