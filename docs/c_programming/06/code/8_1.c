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
void prt_pfactors(int n)
{
    int i=0;
    if(n>0)
    {
        while(i<n)
        {
        i=i+1;
        if(n%i==0)
        {
            if(isprime(i)!=0)
            {printf("%d\n",i);}
        }
        }
    }
    else if(n<0)
    {
        printf("%d\n",-1);
        n=-n;
        while(i<n)
        {
        i=i+1;
        if(n%i==0&&isprime(i)==1)
        {
            printf("%d\n",i);
        }
        }

    }
}

int main()
{
    int n;
    scanf("%d",&n);
    prt_pfactors(n);
    return 0;
}
