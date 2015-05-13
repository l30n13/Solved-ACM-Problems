#include <stdio.h>
#include <string.h>

int main()
{
    char in1[1000],in2[1000],common[1000],temp;
    int i,j,k,l1,l2;
    while(scanf("%s%s",in1,in2))
    {
        l1=strlen(in1);
        l2=strlen(in2);
        k=0;
        for(i=0;i<l1;i++)
            for(j=0;j<l2;j++)
            {
                if(in1[i]==in2[j])
                {
                    common[k]=in1[i];
                    k++;
                    break;
                }
            }
        common[k]='\0';
        l1=strlen(common);

        for(i=0;i<l1;i++)
            for(j=0;j<l1-1;j++)
            {
                if(common[j]>common[j+1])
                {
                    temp=common[j];
                    common[j]=common[j+1];
                    common[j+1]=temp;
                }
            }

        printf("%s\n",common);
    }
    return 0;
}
