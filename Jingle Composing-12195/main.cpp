#include<stdio.h>
#include<string.h>
int main()
{
    char notes[2000];
    float ans,sum;
    int l,i,j;
    while(scanf("%s",notes)!=EOF)
    {
        i=-1;ans=0.00;
        l=strlen(notes);
        if(notes[0]=='*') break;
        for(j=0;j<l;j++)
        {
            i++; sum=0;
            for(;notes[i]!='/'&&i<l;)
            {
                switch(notes[i])
                {
                    case 'W':
                        sum+=1; break;
                    case 'H':
                        sum+=0.5; break;
                    case 'Q':
                        sum+=0.25; break;
                    case 'E':
                        sum+=0.125; break;
                    case 'S':
                        sum+=0.0625; break;
                    case 'T':
                        sum+=0.03125; break;
                    case 'X':
                        sum+=0.015625; break;
                } i++;
            }
            if(sum==1) ans+=1;
        }
        printf("%.0f\n",ans);
    }
    return 0;
}
