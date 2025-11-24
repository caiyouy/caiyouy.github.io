#include <stdio.h>
#include <math.h>

int main()
{
        double sum=0;
        double exact=3.14159265;
        double pi=0;
        int i=1;
        while(exact-pi>1e-5)
        {
                sum+=1.0/i/i;
                i++;
                pi=sqrt(6.0*sum);
        }
        printf("%.6f %.6f %d\n",sum,pi,i-1);
        
        pi=0;
        sum=0;
        i=1;
        while(exact-pi>1e-6)
        {
                sum+=1.0/i/i;
                i++;
                pi=sqrt(6.0*sum);
        }
        printf("%.7f %.7f %d\n",sum,pi,i-1);

        pi=0;
        sum=0;
        i=1.0;
        while(exact-pi>1e-7)
        {
                sum+=1.0/i/i;
                i++;
                pi=sqrt(6.0*sum);
        }
        printf("%.20f %.20f %d\n",sum,pi,i-1);

        long double pi_l=0;
        long double sum_l=0;
        i=1.0;
        while(exact-pi_l>1e-7)
        {
                sum_l+=1.0/i/i;
                i++;
                pi_l=sqrtl(6.0*sum_l);
        }
        printf("%.20Lf %.20Lf %d\n",sum_l,pi_l,i-1);
        return 0;
}
        
