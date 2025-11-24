#include <stdio.h>

int main()
{
    char Line[1000];
    char c;
    int count=0;

    while((c=getchar())!=EOF)
    {
        Line[count++]=c;
        if(c=='\n')  //读入一行
        {
            //进行判断
            if(count<=10) //输出
            {
                for(int i=0;i<count;i++)
                {
                    putchar(Line[i]);
                }
            }
            else //跳过
            {
            }
            count=0;
        }
    }
    return 0;
}