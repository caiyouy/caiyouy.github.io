#include <stdio.h>
#define Max 10

int main()
{
    char c;
    int Nums[Max]={0};
    int len=0;
    while(scanf("%c",&c)!=EOF)
    {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            len++;
        }
        else // Not need to 
        {
            if(len>0)
            {
                Nums[len]++;
                len=0;
            }
            Nums[0]++;
        }
    }
    printf("Length\t Nums\n");
    for(int i=1;i<Max;i++)
    {
        printf("%.2d:\t %d\n",i,Nums[i]);
    }
    return 0;
}