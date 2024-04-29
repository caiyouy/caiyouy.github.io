#include <stdio.h>

void output(int min, int max)
{
    int i,j,k;
    //简单粗暴,三重循环;
    for(i=min;i<=max;i++)
    {
        for(j=i;j<=max;j++)
        {
            for(k=j;k<=max;k++)
            {
                if(i*i+j*j==k*k)
                {
                    printf("%d %d %d\n",i,j,k);
                }
            }
        }
    }
}

int main()
{
    int min,max;
    scanf("%d%d", &min, &max);
    output(min,max);
    return 0;
}