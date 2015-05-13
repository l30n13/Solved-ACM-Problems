#include <stdio.h>
int main()
{
int l,k[16],j,number=0;
unsigned long long i,p,a,b,c,x,y,z;
while(scanf("%llu",&i)==1)
{
number++;
l=0;
p=i;
for(j=0;j<15;j++)
{
k[j]=i%10;
l++;
i/=10;
if(i==0)break;
}
a=p-(p%100000);
b=p-(p%1000);
c=p-(p%100);
x=p-(p%1000000000000);
y=p-(p%10000000000);
z=p-(p%1000000000);
printf("%4d. ",number);
for(j=l-1;j>=0;j--)
{
if((j==13 && k[13]==0)||(j==12 && k[13]==0 && k[12]==0))continue;
else if((j==11 && k[11]==0)||(j==10 && k[11]==0 && k[10]==0))continue;
else if((j==9 && k[9]==0)||(j==8 && k[8]==0))continue;
else if((j==7 && k[8]==0 && k[7]==0)){printf(" kuti ");continue;}
else if((j==6 && k[6]==0)||(j==5 && (k[6]==0 && k[5]==0)))continue;
else if((j==4 && k[4]==0)||(j==3 && k[4]==0 && k[3]==0))continue;
else if((j==2 && k[2]==0)||(j==1 && k[1]==0)||(j==0 && k[1]==0 && k[0]==0))continue;
printf("%d",k[j]);
if(l==15 && j==14)printf(" kuti ");
if(l>12 && j==12 && x%100000000000000!=0)printf(" lakh ");
if(l>10 && j==10 && y%1000000000000!=0 )printf(" hajar ");
if(l>9 && j==9 && z%100000000000!=0)printf(" shata ");
if(l>7 && j==7)printf(" kuti ");
if(l>5 && j==5 && a%10000000!=0)printf(" lakh ");
if(l>3 && j==3 && b%100000!=0)printf(" hajar ");
if(l>2 && j==2 && c%1000!=0)printf(" shata ");
}
printf("\b\n");
}
return 0;
}
