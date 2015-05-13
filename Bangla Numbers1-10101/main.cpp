#include<stdio.h>
int main()
{
long long int num;
int i=0;
while(scanf("%lld",&num)==1)
{
long long a,b,c,d,e,f,g,h;
i++;
if(num==0){printf("%4d. 0\n",i);continue;}
a=num /100000000000000;
num=num %100000000000000;
b=num/1000000000000;
num=num%1000000000000;
c=num/10000000000;
num=num%10000000000;
d=num/1000000000;
num=num%1000000000;
e=num/10000000;
num=num%10000000;
f=num/100000;
num=num%100000;
g=num/1000;
num=num%1000;
h=num/100;
num=num%100;
printf("%4d.",i);
if(a!=0)
printf(" %lld kuti",a);
if(b!=0)
printf(" %lld lakh", b);
if(c!=0)
printf(" %lld hajar",c);
if(d!=0)
printf(" %lld shata",d);
if(e!=0)
printf(" %lld kuti",e);
else if(e==0&&(a!=0||b!=0||c!=0||d!=0))
printf(" kuti");
if(f!=0)
printf(" %lld lakh", f);
if(g!=0)
printf(" %lld hajar",g);
if(h!=0)
printf(" %lld shata",h);
if(num!=0)
printf(" %lld",num);
printf("\n");
}
return 0;
}
