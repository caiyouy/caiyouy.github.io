#include <stdio.h>

// if a>b in the new order relation, return 1
int newOrder(int a,int b)
{
        int tmp_a=a, tmp_b=b;
        int len_a=0, len_b=0;
        while(tmp_a>0)
        {
                tmp_a=tmp_a/10;
                len_a++;
        }
        while(tmp_b>0)
        {
                tmp_b=tmp_b/10;
                len_b++;
        }
        int ab=a, ba=b;
        for(int i=0;i<len_a;i++)
                ba=ba*10;
        for(int i=0;i<len_b;i++)
                ab=ab*10;
        ab=ab+b, ba=ba+a;
        if(ab>ba)
                return 1;
        else
                return 0;
}

void largestNumber(int *A, int N)
{
        // Any sort algorithm for the new order
        // In descending order
        // Here is the select sort
        for(int i=0;i<N;i++)
        {
                int max_index=i;
                for(int j=i+1;j<N;j++)
                {
                        if(newOrder(A[j],A[max_index])==1)
                        {
                                max_index=j;
                        }
                }
                // A[max_index] is maximum in i,i+1,...N-1
                // Exchange A[i] and A[max_index]
                int tmp=A[i];
                A[i]=A[max_index];
                A[max_index]=tmp;
        }
}

int main()
{
        // int A[3]={86,84,8};
        // int N=3;
        int N; int A[100];
        scanf("%d",&N);
        for(int i=0;i<N;i++)
                scanf("%d",&A[i]);
        largestNumber(A,N);
        for(int i=0;i<N;i++)
        {
                printf("%d",A[i]);
        }
        printf("\n");
        return 0;
}
