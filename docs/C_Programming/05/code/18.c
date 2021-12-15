#include <stdio.h>
#include <math.h>

int main()
{
        double pi=3.14159;
        int angle=5;
        for(;angle<90;angle=angle+5)
        {
                double a=angle/180.0*pi;
                printf("%d\t %f\t %f\t %f\t %f\n",angle,sin(a),cos(a),tan(a),1.0/tan(a));
        }
        return 0;
}
        
