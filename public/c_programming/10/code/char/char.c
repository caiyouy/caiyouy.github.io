#include <stdio.h>
#define N 26

void hist(int Nums[])
{
    // Vertical Output
    int max=Nums[0];
    for(int i=1;i<N;i++)
    {
        if(Nums[i]>max) max=Nums[i];
    }
    for(int i=max;i>=1;i--)
    {
        for(int j=0;j<26;j++)
        {
            if(Nums[j]>=i)
            {
                printf("H ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int i=0;i<26;i++)
    {
        printf("--");
    }
    printf("\n");
    for(int i=0;i<26;i++)
    {
        printf("%c ",i+'A');
    }
    printf("\n");
}

int main()
{
    int Nums[N]={0};
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        if('a'<=c&&c<='z') Nums[c-'a']++;
        if('A'<=c&&c<='Z') Nums[c-'A']++;
    }
    hist(Nums);
    return 0;
}