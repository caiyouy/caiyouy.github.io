#include <stdio.h>

int factorial(int n)
{
        if(n==0)
                return 1;
        else
                return n*factorial(n-1);
}

int main()
{
        int i;
        for(i=0;i<30;i++)
        {
                printf("%d!=%d\n",i,factorial(i));
        }
        return 0;
}
