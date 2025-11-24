#include <stdio.h>
#include <ctype.h>

int main()
{
        int c, cd=0, cx=0;
        c=getchar();
        while(c!=EOF)
        {
                if(isdigit(c))
                        ++cd;
                if(isxdigit(c))
                        ++cx;
                c=getchar();
        }
        printf("D: %d, X: %d\n",cd,cx);
        return 0;

}
