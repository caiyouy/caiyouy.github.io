#include <stdio.h>

int main()
{
    int B[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("B[%d][%d]: %p\n",i,j,&B[i][j]);
        }
    }
    printf("B[0]: %p\n", B[0]);
    printf("B[1]: %p\n", B[1]);
    printf("B[0][4]: %d\n",B[0][3]);
    // printf("%d\n",**B);
    // printf("%d\n",B[1][2]);
    // printf("%d\n",*(*(B+1)+2));
    return 0;
}