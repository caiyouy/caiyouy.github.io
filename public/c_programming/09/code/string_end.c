#include <stdio.h>

int main()
{
        char a[6]="Hello";
        char b[5]={'H','e','l','l','o'};
        printf("a:%s\n",a);
        printf("b:%s\n",b);
        printf("%p\n%p\n",a,b);
        return 0;
}

