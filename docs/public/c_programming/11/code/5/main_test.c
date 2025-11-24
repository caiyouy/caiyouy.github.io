#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int num2(int n,int *b,int bits,int x)
{
    int i=0,a=n;
    while(n>=1)
    {
        if(i==bits)
        {
            printf("%d is out of the range of representation with %d bits!\n",x*a,bits);
            return 0;
        }
        if(n%2==1)
        {
            b[i]=1;
            n=(n-1)/2;
        }
        else
        {
            b[i]=0;
            n=n/2;
        }
        ++i;
    }
    return 1;
}
int snum(int *b,int bits)
{
    int n=0;
    for(int i=0;i<bits;++i)
        n+=b[i]*(int)pow(2,i);
    return n;
}
void to_complement(int n,int bits)
{
    int b[bits],m=n,x=1;
    if(n<0)
    {
     m=-n;
     x=-1;
    }
    for(int i=0;i<bits;++i)
        b[i]=0;
    if(num2(m,b,bits,x)==0)
        return;
    num2(m,b,bits,x);
    if(n>=0)
        for(int i=0;i<bits;++i)
            printf("%d",b[bits-i-1]);
    if(n<0)
    {
        if(b[bits-1]==1)
        {
            printf("%d is out of the range of representation with %d bits!",n,bits);
            return 0;
        }

        for(int i=0;i<bits;++i)
            b[i]=1-b[i];
        int ss=snum(b,bits);
        for(int i=0;i<bits;++i)
            b[i]=0;
        num2(ss+1,b,bits,x);
        for(int i=0;i<bits;++i)
            printf("%d",b[bits-i-1]);
    }
}
int main()
{
    int n,bits;
    scanf("%d%d",&n,&bits);
    to_complement(n,bits);
    return 0;
}
