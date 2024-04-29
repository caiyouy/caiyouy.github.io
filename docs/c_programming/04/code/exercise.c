#include <stdio.h>

int main()
{
        //Exercise 2
        int a=1,b=2,c=3,u;
        printf("%d\n",u=a?b:c);
        printf("%d\n",(a=2)?b+a:c+a);
        printf("a=%d\n",a);

        //Exercise 3
        a=1,b=2,c=0;
        printf("%d\n",a&&!((b||c)&&!a));
        printf("%d\n",!(a&&b)||c?a||b:a&&b&&c);
        printf("%d\n",!(a+b<c)&&b<=c*a-b);
        
        //printf("%d\n",012);
        //printf("%d\n",sizeof(int));
        return 0;
}
