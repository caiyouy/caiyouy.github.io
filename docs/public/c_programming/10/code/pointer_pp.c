#include <stdio.h>

int main()
{
    int a;
    double b;
    float c;
    char d;
    int    *ip=&a;    /* 一个整型的指针 */
    double *dp=&b;    /* 一个 double 型的指针 */
    float  *fp=&c;    /* 一个浮点型的指针 */
    char   *cp=&d;     /* 一个字符型的指针 */
    printf("int pointer :%ld\n",(long)(ip+1)-(long)ip);
    printf("double pointer :%ld\n",(long)(dp+1)-(long)dp);
    printf("float pointer :%ld\n",(long)(fp+1)-(long)fp);
    printf("char pointer :%ld\n",(long)(cp+1)-(long)cp);
    // ip=NULL;
    // printf("%d\n",(int)ip);
    return 0;
}