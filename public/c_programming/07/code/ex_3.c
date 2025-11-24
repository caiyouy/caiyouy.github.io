#include <stdio.h>
#include <stdlib.h>

double pi()
{
    int Max=1000000;
    int N=0;
    for(int i=0;i<Max;i++)
    {
        double x=(double)rand()/RAND_MAX;
        double y=(double)rand()/RAND_MAX;
        if(x*x+y*y<=1)
        {
            N=N+1;
        }
    }
    double res=(double)N/Max;
    return res*4.0;
}

int main()
{
    printf("%.2f\n",pi());
    return 0;
}