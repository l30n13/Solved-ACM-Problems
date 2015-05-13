#include<stdio.h>
#include<string.h>
int main()
{
    char inputs[100],put[100],letter[]={'1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']',92,'A','S','D','F','G','H','J','K','L',';',39,'Z','X','C','V','B','N','M',',','.','/'};
    int l,i,j;
    while(gets(inputs))
    {
        l=strlen(inputs);
        for(i=0;i<46;i++)
            for(j=0;j<l;j++)
            {
                if(inputs[j]=='`'||inputs[j]=='1'||inputs[j]=='Q'||inputs[j]=='A'||inputs[j]=='Z'||inputs[j]==' ')
                    put[j]=inputs[j];
                else if(letter[i]==inputs[j])
                    put[j]=letter[i-1];
            }
        for(i=0;i<l;i++)
            printf("%c",put[i]);
        printf("\n");
    }
    return 0;
}
