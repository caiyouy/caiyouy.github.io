#include <stdio.h>
#include <string.h>

int main()
{
        char a[6]="Hello";
        char b[5]={'H','e','l','l','o'};
        printf("strlen:%d\n",(int)strlen(a));
        printf("sizeof:%d\n",(int)sizeof(a));
        int c[3];
        printf("sizeof:%d\n",(int)sizeof(c));

        return 0;
}
