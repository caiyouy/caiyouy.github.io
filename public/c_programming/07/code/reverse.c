#include <stdio.h>

int reverse(int a)
{
        int b=0;
        while(a!=0)
        {
                b=b*10+a%10;
                a=a/10;
        }
        return b;
}

int main()
{
        int a=1234;
        printf("%d\n",reverse(a));
        return 0;
}
