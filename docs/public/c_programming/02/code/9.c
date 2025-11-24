#include <stdio.h>
#include <math.h>

int main()
{
        double a;
        double b;
        double c;
        a=5;
        b=2;
        c=6;
        double delta=b*b-4*a*c;
        double real=-b/2/a;
        double imag=sqrt(-delta)/2/a;
        printf("%f+%fi\n",real,imag);
        printf("%f%fi\n",real,-imag);
        
        return 0;
}
        
