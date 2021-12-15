#include <stdio.h>

int  monkey(int m, int n)
{
    int monkeys[100];
    for(int i=0;i<m;i++)
    {
        monkeys[i]=1;
    }
    //loop
    int k=0;
    int remain=m;
    for(int i=0;;i=(i+1)%m)
    {
        if(monkeys[i]==0)
        {
            continue;
        }
        else
        {
            k++;
        }
        if(k==n) // 数到n,踢掉一猴
        {
            monkeys[i]=0;
            k=0;
            remain--;
            printf("Loop %2d: %2d Out!\n",m-remain,i+1);
            if(remain==1)
            {
                break;
            }
        }
    }
    //结果
    for(int i=0;i<m;i++)
    {
        if(monkeys[i]==1)
        {
            return (i+1);
        }
    }

}

int main()
{
    int m=18;
    int n=6;
    printf("The King is No.%d!!!\n", monkey(m,n));
    return 0;
}