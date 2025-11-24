#include <stdio.h>
#include <math.h>

double f(double x)
{
        return pow(x,3)-2.0*pow(x,2)-11.0*x+12;
}

double df(double x)
{
        return 3*x*x-4*x-11;
}

double newton(double x0)
{
        double x,x_old;
        x=x0;
        x_old=x0-1;
        while(fabs(x-x_old)>1e-8)
        {
                x_old=x;
                x=x_old-f(x_old)/df(x_old);
        }
        return x;
}


int main()
{
        double x0=2.35287527;
        printf("Root: %f\n",newton(x0));
        x0=2.35284172;
        printf("Root: %f\n",newton(x0));
        return 0;
}
                

