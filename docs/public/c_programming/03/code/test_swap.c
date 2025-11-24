#include <stdio.h>

void swap(int a, int b);

void swap(int a, int b)
{
        int tmp;
        tmp=a;
        a=b;
        b=tmp;
}

int main()
{
        int a=0, b=1;
        printf("Before Exchange: \n");
        printf("a= %d, b= %d\n",a,b);

        printf("After Exchange: \n");
        printf("a= %d, b= %d\n",a,b);
        return 0;
}
