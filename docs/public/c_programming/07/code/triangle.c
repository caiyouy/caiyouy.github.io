#include <stdio.h>

int combine(int n, int k)
{
    if(n==0||k==0||k==n)
    {
        return 1;
    }
    else
    {
        return combine(n-1,k-1)+combine(n-1,k);
    }
}


int main()
{
    int nline=9;
    for(int i=0;i<nline;i++)
    {
        for(int s=nline-i;s>=0;s--)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("%2d  ",combine(i,j));
        }
        printf("\n");
    }
    return 0;
}