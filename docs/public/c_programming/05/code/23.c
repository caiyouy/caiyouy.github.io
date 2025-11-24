#include <stdio.h>

int main()
{
        for(int i=1;i<100;i++)
        {
                if(i%6==0||i%7==0)
                {
                        printf("%d\n",i);
                }
        }

        printf("---\n");

        for(int i=1;i<100;i++)
        {
                if((i%6==0&&i%7!=0)||(i%6!=0&&i%7==0))
                        printf("%d\n",i);
        }
        return 0;
}

