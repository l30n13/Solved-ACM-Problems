#include<stdio.h>
int main()
{
    char full[100],c;
    int a,b,ans,r,count=0;
    while(gets(full))
    {
        if(sscanf(full,"%d%c%d=%d",&a,&c,&b,&ans)!=4)
            continue;
        switch(c)
        {
            case '+':
                r=a+b;
                break;
            case '-':
                r=a-b;
                break;
        }
        if(r==ans) count++;
    }
    printf("%d\n",count);
    return 0;
}
