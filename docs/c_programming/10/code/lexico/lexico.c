#include <stdio.h>
#define Nmax 100

void print(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",A[i]);
    }
    printf("\n");
}

void swap(int A[], int m, int n)
{
    int tmp=A[m];
    A[m]=A[n];
    A[n]=tmp;
}

int next(int A[], int n)
{
    int k,i;
    for(k=n-2;A[k]>A[k+1]&&k>=0;k--); // Find first(right to left) A[k]<A[k+1]
    if(k<0) return 0; // This means A[j]>A[j+1] for all j ---- Maximum in lexicographical order;
    for(i=n-1;A[k]>A[i];i--); // Find minimal A[i]>A[k]
    swap(A,k,i); // Exchange A[i] and A[k]
    //Sort A[k+1]--A[n-1]; Any sort is OK; But Notice it's in reverse order
    k=k+1,i=n-1;
    while(k<i)
    {
        swap(A,k,i);
        k++;
        i--;
    }
    return 1;
}

int main()
{
    int A[Nmax], n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        A[i]=i+1;
    }
    do{
        print(A,n);
    }while(next(A,n));
    return 0;
}