#include <stdio.h>
#include <limits.h>

int Collatz(int x)
{
    int i=0;
    double tmp=(INT_MAX-1)/3.0;
    for(;i<10000;i++)
    {
        printf("%d\n",x);
        if(x==1)
        {
            break;
        }
        if(x%2==1)
        {
            if(x>tmp)
            {
                printf("Error:overflow!\n");
                return 1;
            }
            x=x*3+1;
        }
        else
        {
            x=x/2;
        }
    }
    printf("Recursive steps:%d\n\n",i);
    return 0;
}

int main()
{
    int x;
    //while loop
    while(scanf("%d",&x)==1)
    {
        Collatz(x);
    }
    return 0;
}