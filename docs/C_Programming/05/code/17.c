#include <stdio.h>

double power(double x, int n)
{
        double res=1;
        if(n<0)
        {
                n=-n;
                x=1.0/x;
        }
        for(int i=0;i<n;i++)
        {
                res=res*x;
        }
        return res;
}

int main()
{
        double x;
        int n;
        scanf("%lf %d",&x,&n);
        double res=power(x,n);
        printf("%f\n",res);
        return 0;
}
        
