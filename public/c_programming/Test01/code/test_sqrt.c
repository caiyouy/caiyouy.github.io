#include <stdio.h>
#include <math.h>

double my_sqrt(double a)
{
        if(a<0)
        {
                printf("Error! Negative Input!");
                return -1;
        }
        if(a<1e-10)
        {
                return 0;
        }
        double res=0;
        double x1=a, x2=a-1;
        double change=fabs(x1-x2);
        while(change>1e-5)
        {
                x2=x1;
                x1=x1-(x1*x1-a)/2.0/x1;
                change=fabs(x1-x2);
        }
        return x1;
}

int main()
{
        double a=12334;
        double x1=sqrt(a);
        double x2=my_sqrt(a);
        printf("sqrt(%f)=%e\n",a,x1);
        printf("my_sqrt(%f)=%e\n",a,x2);
        printf("Relative Error: %e\n",fabs(x1-x2)/x1);
        return 0;
}
