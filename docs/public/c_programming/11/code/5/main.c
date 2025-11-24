#include <stdio.h>

int bit[32]={0};

void to_complement(int n, int bits)
{
        int tmp=n;
        if(n<0)
        {
                tmp=-1*tmp;
        }
        // Convert to binary
        for(int i=0;i<bits;i++)
        {
                if(tmp%2==1)
                {
                        bit[i]=1;
                }
                tmp=tmp/2;
        }
        if(tmp!=0)
        {
                printf("%d is out of the range of representation with %d bits!\n",n,bits);
                return;
        }
        if(n<0)
        {
                // convert
                for(int i=0;i<bits;i++)
                {
                        if(bit[i]==0)
                                bit[i]=1;
                        else
                                bit[i]=0;
                }
                // +1
                for(int i=0;i<bits;i++)
                {
                        if(bit[i]==1)
                                bit[i]=0;
                        else
                        {
                                bit[i]=1;
                                break;
                        }
                }
                
        }
        // Output
        for(int i=bits-1;i>=0;i--)
                printf("%d",bit[i]);
        printf("\n");
}

int main()
{
        int n, bits;
        scanf("%d %d",&n,&bits);
        to_complement(n,bits);
        return 0;

}
