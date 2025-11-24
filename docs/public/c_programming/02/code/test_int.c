#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    // short int
    short int max_short=SHRT_MAX;
    short int min_short=SHRT_MIN;
    printf("Max short int is %d\n",max_short);
    printf("Min short int is %d\n",min_short);
    max_short = max_short + 1;
    min_short = min_short -1;
    printf("Max short + 1 has %d\n",max_short);
    printf("Min short - 1 has %d\n",min_short);

    // Conform
    printf("2^15 - 1 = %lf\n",pow(2.0,15.0)-1.0);
    return 0;
}