# include <stdio.h>
int main ()
{
    long long n,devide,modulus,sum,sum1;
    scanf ("%lld",&n);
    while (n!=0)
    {
        sum=0;sum1=0;
        do
        {
            sum=0;sum1=0;
            devide=n/10;
            modulus=n%10;
            while (devide!=0)
            {
                sum1=sum1+modulus;
                modulus=devide%10;
                devide=devide/10;
            }
            sum=sum1+modulus;
            n=sum;
        }while (n>=10);
        printf ("%lld\n",sum);
        scanf ("%lld",&n);
    }
    return 0;
}
