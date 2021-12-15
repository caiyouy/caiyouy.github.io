#include<stdio.h>
#include<math.h>

double A[100][100];

// multiplication between matrix and vector
void mv(double A[][100], double *x, double* res, int N)
{
        for(int i=0;i<N;i++)
        {
                res[i]=0;
                for(int j=0;j<N;j++)
                {
                        res[i]+=A[i][j]*x[j];
                }
        }
}

double norm2(double *x, int N)
{
        double res=0;
        for(int i=0;i<N;i++)
        {
                res+=x[i]*x[i];
        }
        return sqrt(res);
}

void pow_method(double A[][100], int N)
{
        double tmp;
        double x_new[100],x_old[100],diff[100];
        for(int i=0;i<N;i++) x_new[i]=1;
        do{
                // x_old=x_new;
                for(int i=0;i<N;i++)
                {
                        x_old[i]=x_new[i];
                }
                mv(A,x_old,x_new,N);
                // Normalize x_new
                tmp=norm2(x_new,N);
                for(int i=0;i<N;i++)
                {
                        x_new[i]=x_new[i]/tmp;
                }
                // diff=x_new-x_old;
                for(int i=0;i<N;i++)
                {
                        diff[i]=x_new[i]-x_old[i];
                }
        }while(norm2(diff,N)>1e-8);
        //Output
        printf("Eigenvalue:\n%.4f\n",tmp);
        printf("Eigenvector:\n");
        double sign=1.0;
        if(x_new[0]<0) sign=-1.0;
        for(int i=0;i<N;i++)
        {
                printf("%.4f\n",sign*x_new[i]);
        }
}

int main()
{
        int N;
        scanf("%d",&N);
        for(int i=0;i<N;i++)
        {
                for(int j=0;j<N;j++)
                {
                        scanf("%lf",&A[i][j]);
                }
        }
        pow_method(A,N);
        return 0;
}
