#include <stdio.h>

int main()
{
        printf("%d\n",(int)(7.2/5)+3/2+010+0x1);

        int x=0;
        printf("%d\n",x);
        x++?(x=2):x==3;
        printf("%d\n",x);
        printf("%d\n",x);
        
        char c='a';
        printf("%c\n",c+2);

        int flag=1;
        int t=0;
        switch(flag)
        {
                default:
                        t++;
                case -1:
                        t++;
                        break;
                case 0:
                        t++;
                        break;
        }
        printf("%d",t);


        const int a=x*x;
        static int b=3;
        return 0;
}
