#include<stdio.h>
#include<math.h>
int main()
{
    double radious,number_of_sides,PI;
    PI=4*atan(1);
    while(scanf("%lf%lf",&radious,&number_of_sides)==2)
            printf("%.3lf\n",radious*radious*number_of_sides*sin(2.00*PI/number_of_sides)/2.00);
       return 0;
}
