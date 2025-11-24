#include <stdio.h>

void circle()
{
        double radio=2;
        double r=30;
        double org_x=r, org_y=r;
        for(double i=0;i<2*r;i=i+1)
        {
                for(double j=0;j<2*r;j=j+1)
                {
                        double tmp=radio*radio*(i-org_x)*(i-org_x)+(j-org_y)*(j-org_y);
                        if(tmp<r*r)
                        {
                                printf("*");
                        }
                        else
                        {
                                printf(" ");
                        }
                }
                printf("\n");
        }
}

int main()
{
        circle();
        return 0;
}
