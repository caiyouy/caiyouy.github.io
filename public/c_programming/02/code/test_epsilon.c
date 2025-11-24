#include <stdio.h>

int main()
{
    // Test epsilon for float
    float epsilon_f=1.0;
    float tmp_f=1.0+0.5*epsilon_f;
    while(tmp_f != 1.0)
    {
        epsilon_f=epsilon_f*0.5;
        tmp_f = 1.0+0.5*epsilon_f;
    }
    printf("Float epsilon : %e\n",epsilon_f);

    // Test epsilon for double
    double epsilon_lf=1.0;
    double tmp_lf=1.0+0.5*epsilon_lf;
    while(tmp_lf != 1.0)
    {
        epsilon_lf=epsilon_lf*0.5;
        tmp_lf = 1.0+0.5*epsilon_lf;
    }
    printf("Double epsilon: %e\n",epsilon_lf);
}
