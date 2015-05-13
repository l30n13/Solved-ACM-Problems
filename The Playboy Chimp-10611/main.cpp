#include<stdio.h>
int main()
{
    int i,j,N,Q,chimp[50000],lady[25000],put1[50000],put2[50000],m,n;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&lady[i]);
    scanf("%d",&Q);
    for(i=0;i<Q;i++)
        scanf("%d",&chimp[i]);

    for(i=0;i<Q;i++)
    {
        m=0;
        for(j=0;j<N;j++)
        {
            if(chimp[i]>lady[j])
            {
                put1[i]=lady[j];
                m++;
            }
        }
         if(m==0)
            put1[i]=88;
    }

    for(i=0;i<Q;i++)
    {
        n=0;
        for(j=0;j<N;j++)
        {
            if(chimp[i]<lady[j])
            {
                put2[i]=lady[j];
                n++; break;
            }
        }

        if(n==0)
            put2[i]=88;
    }
    for(i=0;i<Q;i++)
    {
        if(put1[i]==88&&put2[i]==88)
            printf("%c %c\n",put1[i],put2[i]);
        else if(put1[i]==88)
            printf("%c %d\n",put1[i],put2[i]);
        else if(put2[i]==88)
            printf("%d %c\n",put1[i],put2[i]);
        else
            printf("%d %d\n",put1[i],put2[i]);
    }
    return 0;
}
