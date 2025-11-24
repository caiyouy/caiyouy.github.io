#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

int main(int argc, char const *argv[])
{
    int N=atoi(argv[1]);
    printf("N=%d\n",N);
    int *a1=(int *)malloc(N*sizeof(int));
    int *a2=(int *)malloc(N*sizeof(int));
    int *a3=(int *)malloc(N*sizeof(int));
    int *a4=(int *)malloc(N*sizeof(int));
    int *a5=(int *)malloc(N*sizeof(int));
    for(int i=0;i<N;i++)
    {
        int k=rand()%N;
        a1[i]=k;
        a2[i]=k;
        a3[i]=k;
        a4[i]=k;
        a5[i]=k;
    }
    double t0=clock();
    select_sort(a1,N);
    printf("Spending %f s\n\n",(clock()-t0)/CLOCKS_PER_SEC);

    t0=clock();
    bubble_sort(a2,N);
    printf("Spending %f s\n\n",(clock()-t0)/CLOCKS_PER_SEC);
    
    t0=clock();
    insert_sort(a3,N);
    printf("Spending %f s\n\n",(clock()-t0)/CLOCKS_PER_SEC);
    
    t0=clock();
    shell_sort(a4,N);
    printf("Spending %f s\n\n",(clock()-t0)/CLOCKS_PER_SEC);

    t0=clock();
    quick_sort(a5,N);
    printf("Spending %f s\n\n",(clock()-t0)/CLOCKS_PER_SEC);
    
    return 0;
}