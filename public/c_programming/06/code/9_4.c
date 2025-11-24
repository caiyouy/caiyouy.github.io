#include <stdio.h>
#include <math.h>


int main()
{
    int n=1;
    long double m=1;
    long double sum=0;
    while(m>=1E-5)
    {
        sum+=1./pow(n,2);
        ++n;
        m=sqrtl(6*sum)-3.14159265;
        if(m<0)
            m=-m;
    }
    printf("%.6lf %.6lf %d\n",sum,sqrtl(6*sum),n-1);
    long double sum1=0;
    m=1;
    n=1;
    while(m>=1E-6)
    {
        sum1+=1./pow(n,2);
        ++n;
        m=sqrtl(6*sum1)-3.14159265;
        if(m<0)
            m=-m;
    }
    printf("%.7lf %.7lf %d\n",sum1,sqrtl(6*sum1),n-1);
    m=1;
    n=1;
    long double sum2=0;
    while(m>=1E-7)
    {
        sum2+=1./pow(n,2);
        ++n;
        m=sqrtl(6*sum2)-3.14159265;
        if(m<0)
            m=-m;
    }
    printf("%.8lf %.8lf %d\n",sum2,sqrtl(6*sum2),n-1);
    return 0;
}
