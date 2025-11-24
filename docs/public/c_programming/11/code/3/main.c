#include <stdio.h>

int flag[2000];

int Calc(int x, int y)
{
        if(x>=y)
                return x-y;
        //x<y
        int N=1+y;
        for(int i=0;i<N;i++)
        {
                flag[i]=-1;
        }
        flag[x-1]=0;
        int n=0;
        while(flag[y-1]==-1)
        {
                for(int i=0;i<N;i++)
                {
                        if(flag[i]==n)
                        {
                                if(i-1>=0&&flag[i-1]==-1)
                                        flag[i-1]=n+1;
                                if(2*i+1<N&flag[2*i+1]==-1)
                                        flag[2*i+1]=n+1;
                        }
                }
                n=n+1;
        }
        return flag[y-1];
}

int main()
{
        int x,y;
        scanf("%d %d",&x,&y);
        printf("%d\n",Calc(x,y));
        return 0;
}
