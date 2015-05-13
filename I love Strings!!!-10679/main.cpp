#include<stdio.h>
#include<string.h>
int main()
{
    int c,i,j,k,l,q,count;
    char s[100005],T[1000];
    while(scanf("%d",&c)==1)
    {
        for(k=0;k<c;k++)
        {
            scanf("%s",s);
            scanf("%d",&q);
            for(i=0;i<q;i++)
            {
                scanf("%s",T);
                l=strlen(T);
                count=0;
                for(j=0;j<l;j++)
                {
                    if(T[j]==s[j])
                    count++;
                }
                if(count==l) printf("y\n");
                else printf("n\n");
            }

        }
    }
    return 0;
}
