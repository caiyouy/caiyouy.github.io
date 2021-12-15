#include <stdio.h>

int  monkey(int total, int start, int interval)
{
    int monkeys[100];
    for(int i=0;i<total;i++)
    {
        monkeys[i]=1;
    }
    int k=0;
    int remain=total;
    // Loop
    for(int i=start;;i=(i+1)%total)
    {
        if(monkeys[i]==0)
        {
            continue;
        }
        else
        {
            k++;
            if(k==interval) // 数到n,踢掉一猴
            {
                monkeys[i]=0;
                k=0;
                remain--;
                printf("Loop %2d: %2d Out!\n",total-remain,i+1);
                if(remain==1)
                {
                    break;
                }
            }
        }
    }
    //结果
    for(int i=0;i<total;i++)
    {
        if(monkeys[i]==1)
        {
            return i;
        }
    }
}

int  monkey_true(int total, int start, int interval)
{
    int k=0;
    for(int num=2;num<=total;num++)
    {
        k=(k+interval%num)%num;
    }
    return (k+start)%total;
}

int main()
{
    int m=12;
    int k=5;
    int n=10;
    printf("The King is No.%d!!!\n", monkey(m,k,n));
    printf("The King is No.%d!!!\n", monkey_true(m,k,n));
    return 0;
}
