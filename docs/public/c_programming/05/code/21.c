#include <stdio.h>
#include <math.h>

int main()
{
        double x=100,y=100;
        double a=pow(1.01,5);
        double b=1.05;
        for(int i=5;i<=50;i=i+5)
        {
                x=x*a;
                y=y*b;
                printf("%d\t %f\t %f\n",i,x,y);
        }
        return 0;
}
