#include <stdio.h>
#include <math.h>

int main()
{
   long long n = 1;
   long double sum = 0, pi = 3.14159265;
   while (pi - sqrtl(6 * sum) > 0.00001)
   {
      sum = sum + 1. / (n * n);
      n++;
   }
   printf("%.6lf %.6lf %lld\n", sum, sqrtl(6 * sum), n - 1);
   while (pi - sqrtl(6 * sum) > 0.000001)
   {
      sum = sum + 1. / (n * n);
      n++;
   }
   printf("%.7lf %.7lf %lld\n", sum, sqrtl(6 * sum), n - 1);
   while (pi - sqrtl(6 * sum) > 0.0000001)
   {
      sum = sum + 1. / (n * n);
      n++;
   }
   printf("%.8lf %.8lf %lld\n", sum, sqrtl(6 * sum), n - 1);
   return 0;
}
