#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char* table[18]={
        "申武杰",
        "王乐桐",
        "王昺皓",
        "杨晓枫",
        "王潇逸",
        "陈泓宇",
        "杨茗 ", 
        "宣涵潇",
        "虞家伟",
        "刘抒睿",
        "王钶 ", 
        "周启航",
        "董斯煜",
        "吴百濠",
        "王梓晗",
        "杨泓暕",
        "郭天瑜",
        "林左 ", 
    };
    srand((int)time(0));
    int n=rand()%18;
    printf("%d: %s\n",n,table[n]);
    return 0;
}