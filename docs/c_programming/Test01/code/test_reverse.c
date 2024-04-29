#include <stdio.h>

int reverse(int x)
{
        int res=0;
        while(x!=0)
        {
            int tmp=x%10;
            x=x/10;
            res=res*10+tmp;
        }
        return res;
}

int main()
{
        int x=123;
        printf("x=%d,\t x_inv=%d\n",x,reverse(x));
        x=-123;
        printf("x=%d,\t x_inv=%d\n",x,reverse(x));
        x=120;
        printf("x=%d,\t x_inv=%d\n",x,reverse(x));
        return 0;
}
