#include<stdio.h>
#include<string.h>
int main()
{
	char in[100000],sub[100000];
	long int i,j,k,l,m,n;
	while(scanf("%s%s",in,sub)!=EOF)
	{
		l=strlen(in);
		k=strlen(sub);
		m=0; n=0;
		for(i=0;i<l;i++)
			for(j=n;j<k;j++)
			{
				if(in[i]==sub[j])
				{
				    m++;
				    n=j+1;
				    break;
				}
			}
		if(m==l)
		printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
