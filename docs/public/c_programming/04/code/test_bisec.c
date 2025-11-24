#include <stdio.h>
#include <math.h>

double f(double x)
{
        return pow(x,5)+3*x-10;
}

int main()
{
        double lb=0, ub=2;
        double tmp;
        //while(fabs(lb-ub)>1e-8)
        while(ub-lb!=0)
        {
                tmp=(lb+ub)/2.0;
                if(f(tmp)>0)
                        ub=tmp;
                else if(f(tmp)==0)
                        break;
                else
                        lb=tmp;
                printf("%1.12e,%1.12e\n",lb,ub);
        }
        printf("Root x=%f\n",tmp);
        printf("F(x)=%f\n",f(tmp));
        return 0;               
}
