#include <stdio.h>
#include <math.h>

void root2(double a,double b,double c)
{
    if (a!=0)
    {
        double tmp,q,d=b*b-4*a*c;
        if (d>0)
        {
            tmp=sqrt(d);
            printf("Two real roots:%f,%f\n",
                   (-b-tmp)/2/a,(-b+tmp)/2/a);
        }
        else if(d=0)
        {
            printf("One real root:%f\n",-b/2/a);
        }
        else
        {
            tmp=sqrt(0-(-d));
            printf("No real root\n");
            printf("Two roots:%f+(%f)i,%f+(%f)i\n",-b/2/a,tmp/2/a,-b/2/a,-tmp/2/a);
        }
    }
    else  if(b!=0)
    {
        printf("One real root:%f\n",-c/b);
    }
    else
    {
        printf("No real root\n");
    }
}

int main()
{
    root2(0,2,3);
    root2(1,6,4);
    root2(1,2,2);
    return 0;
}
