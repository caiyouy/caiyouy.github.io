#include <stdio.h>

int gcd(int a, int b)
{
        int tmp;
        while(b!=0)
        {
                tmp=b;
                b=a%b;
                a=tmp;
        }
        return a;
}

int main()
{
        int a=20, b=48;
        printf("gcd(%d,%d)=%d\n",a,b,gcd(a,b));
        printf("%d\n",-4% 3);
        printf("%d\n", 4% 3);
        printf("%d\n",-4%-3);
        printf("%d\n", 4%-3);
        return 0;
}
