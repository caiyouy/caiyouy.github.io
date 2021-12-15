#include <stdio.h>
#include <math.h>

double f(double x)
{
        return x*x-19;
}

int main()
{
        //bisection
        int i=0;
        printf("%d\t %f\n",i,sqrt(19));
        printf("------------------\n");
        double a=0, b=12;
        double x=0.5*(a+b);
        while(fabs(f(x))>1e-6)
        {
                i++;
                printf("%d\t %f\n",i,x);
                if(f(x)>0)
                        b=x;
                else
                        a=x;
                x=0.5*(a+b);
        }

        printf("\n\n");
        //Newton
        i=0;
        printf("%d\t %f\n",i,sqrt(19));
        printf("------------------\n");
        x=6;
        while(fabs(f(x))>1e-6)
        {
                i++;
                printf("%d\t %f\n",i,x);
                x=x-f(x)/2.0/x;
        }
        return 0;
}
