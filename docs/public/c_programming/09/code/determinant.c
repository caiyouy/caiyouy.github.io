#include <stdio.h>

int get_invert(int in[],int n)
{
    int res=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(in[i]>in[j])
            {
                res++;
            }
        }
    }
    return res;
}

//Definition
double det(double a[][4],int n)
{
    double res=0;
    int seq[24][4]={
        {1,2,3,4},{1,2,4,3},{1,3,2,4},{1,3,4,2},{1,4,2,3},{1,4,3,2},
        {2,1,3,4},{2,1,4,3},{2,3,1,4},{2,3,4,1},{2,4,1,3},{2,4,3,1},
        {3,1,2,4},{3,1,4,2},{3,2,1,4},{3,2,4,1},{3,4,1,2},{3,4,2,1},
        {4,1,2,3},{4,1,3,2},{4,2,1,3},{4,2,3,1},{4,3,1,2},{4,3,2,1}};
    for(int i=0;i<24;i++)
    {
        int k=get_invert(seq[i],n);
        double sign=1;
        if(k%2==1)
        {
            sign=-1;
        }
        double tmp=1;
        for(int j=0;j<n;j++)
        {
            int index=seq[i][j]-1;
            tmp *= a[j][index];
        }
        res += sign*tmp;
    }
    return res;
}

// Guass Elimination
double det_guass(double a[][4],int n)
{
    for(int i=0;i<n;i++)
    {
        // Using i-row to eliminate j-row
        for(int j=i+1;j<n;j++)
        {
            double tmp=a[j][i]/a[i][i];
            a[j][i]=0;
            for(int k=i+1;k<n;k++)
            {
                a[j][k] -= tmp*a[i][k];
            }
        }
    }
    double res=1;
    for(int i=0;i<n;i++)
    {
        res *= a[i][i];
    }
    return res;
}


int main()
{
    double a[][4]={{1,2,3,4},{2,1,3,4},{3,1,2,4},{4,1,2,3}};
    printf("det(a)=%f\n",det(a,4));
    printf("det(a)=%f\n",det_guass(a,4));
}

