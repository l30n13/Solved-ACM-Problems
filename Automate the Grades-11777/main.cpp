#include<stdio.h>
int main()
{
    int Term1,Term2,Final,Attendance,Class_Test[3],classtest[3],cases,i,j,k,m,count=1;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%d%d%d%d%d%d%d",&Term1,&Term2,&Final,&Attendance,&Class_Test[0],&Class_Test[1],&Class_Test[2]);
        j=100;k=0;
        for(i=0;i<3;i++)
        {
            if(j>Class_Test[i])
            {
                j=Class_Test[i];
                m=i;
            }
        }
        for(i=0;i<3;i++)
        {
            if(i==m) continue;
            if(j<=Class_Test[i])
            {
                classtest[k]=Class_Test[i];
                k++;
            }
        }
        classtest[2]=Term1+Term2+Final+Attendance+(classtest[0]+classtest[1])/2;
        switch(classtest[2]/10)
            {
                case 10:
                case 9:
                    printf("Case %d: A\n",count); break;
                case 8:
                    printf("Case %d: B\n",count); break;
                case 7:
                    printf("Case %d: C\n",count); break;
                case 6:
                    printf("Case %d: D\n",count); break;
                default:
                    printf("Case %d: F\n",count); break;
            }
        count++;
    }
    return 0;
}
