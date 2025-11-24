#include <stdio.h>

int max(int a, int b)
{
        if(a>b)
        {
                return a;
        }
        else
        {
                return b;
        }
}


int main()
{
        int a=1, b=2;
        int big=max(a,b);
        printf("max(a,b)=%d\n",big);
        return 0;
}
