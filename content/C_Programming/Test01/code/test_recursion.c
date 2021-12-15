#include <stdio.h>
#define LIMIT 6 

void fun(int n)
{
   int i=0;
   if (n<=LIMIT)
   {
           for(i=0;i<n;i++)
           {
                   printf("*");
           }
           printf("\n");
   }
   if(n+1<=LIMIT)
   {
           fun(n+1);
   }
   if (n<LIMIT)
   {
           for(i=0;i<n;i++)
           {
                   printf("*");
           }
           printf("\n");
   }
}

int main()
{
        fun(1);
        return 0;
}
