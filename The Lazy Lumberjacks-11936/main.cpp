#include<stdio.h>
int main()
{
    int triangle[3],n,i,j,temp;
    while(scanf("%d",&n)!=EOF)
    {
        while(n--)
        {
            while(1)
            {
                for(i=0;i<3;i++)
                scanf("%d",&triangle[i]);
                if(triangle[0]==triangle[1]&&triangle[1]==triangle[2])
                    {printf("OK\n");break;}
                else
                    for(i=0;i<3;i++)
                        for(j=0;j<2;j++)
                        {
                            if(triangle[j]>triangle[j+1])
                            {
                                temp=triangle[j];
                                triangle[j]=triangle[j+1];
                                triangle[j+1]=temp;
                            }
                        }
                if((triangle[0]+triangle[1])>triangle[2])
                    {printf("OK\n");break;}
                else
                    {printf("Wrong!!\n");break;}
            }
        }
    }
    return 0;
}
