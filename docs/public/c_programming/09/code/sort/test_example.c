#include <stdio.h>
#include "sort.h"
#define N 10

int main()
{
    int a[N]={10,7,15,26,27,1,9,12,98,10};
    printf("Before Sort: \n");
    print(a,N);
    quick_sort(a,N);
    printf("After Sort: \n");
    print(a,N);
    return 0;
}