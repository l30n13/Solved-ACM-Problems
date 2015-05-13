# include <stdio.h>
int main()
{
int n,i,ar[5],j,k,temp;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d %d %d %d",&ar[0],&ar[1],&ar[2],&ar[3]);
if(ar[0]==ar[1] && ar[1]==ar[2] && ar[2]==ar[3])
printf("square\n");
else
{

for(j=0;j<3;j++)
{
for(k=0;k<3-j;k++)
{
if(ar[k]>ar[k+1])
{
temp = ar[k];
ar[k] = ar[k+1];
ar[k+1] = temp;
}

}


}
if(ar[0]==ar[1] && ar[2]==ar[3])
printf("rectangle\n");
else if((ar[0]+ar[1]+ar[2])>ar[3])
printf("quadrangle\n");
else
printf("banana\n");


}

}
return 0;
}
