#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[4];
    for(;p>&a[-1];p--)
    {
        printf("%d",*p);
    }
    return 0;
}