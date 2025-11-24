#include <stdio.h>
#include <math.h>
int isprime(n)
{
    int i=1;
    while(i<n-1)
    {
        i=i+1;
        if(n%i==0)
           return 0;
    }
        return 1;
}
int fact(n)
{
    int i=1,m=n;
    while(i<n-1)
    {
        i=i+1;
        m=m-i;
        if(isprime(i)&&isprime(m)==1)

            return 1;

    }
    return 0;

}
int judge(n)
{
    int p=4;
    while(p<=n)
    {
        p=p+2;
       printf("%d\n",fact(p));
    }

}
int main()
{
    judge(100);
    return 0;
}
