#include <stdio.h>

int main()
{
    // int a=10;
    // printf("%d\n",*(&a));
    int    *ip;    /* 一个整型的指针 */
    double *dp;    /* 一个 double 型的指针 */
    float  *fp;    /* 一个浮点型的指针 */
    char   *cp;     /* 一个字符型的指针 */
    printf("int * : %d\n",(int)sizeof(ip));
    printf("double * : %d\n",(int)sizeof(dp));
    printf("float * : %d\n",(int)sizeof(fp));
    printf("char * : %d\n",(int)sizeof(cp));

    // ip=NULL;
    // printf("%d\n",(int)ip);
    return 0;
}