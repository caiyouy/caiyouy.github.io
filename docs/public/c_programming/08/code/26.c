#include <stdio.h>
#include <math.h>
#define e0 1e-13 
double f(double x);
double f_(double x); //f的导函数

void Newton(double x0){
    static int step=0;
    if(fabs(x0*exp(x0)-1) < e0)
        printf("Newton method, root: %f ,iterations: %d\n",x0,step);
    else{
        x0=x0-f(x0)/f_(x0);
        step++;
        Newton(x0);
    }
}

void Bisec(double a,double b){
    static int step=0;
    double c;
    if(fabs(b*exp(b)-1) < e0)
        printf("Bisection method, root: %f ,iterations: %d",b,step);
    else {
        c=(a+b)*0.5;
        step++;
        if(f(c)*f(a)<0)
            Bisec(a,c);
        else
            Bisec(c,b);
    }
}

double f(double x0){
    return x0*exp(x0)-1;
}
double f_(double x){
    return (x+1.)*exp(x);
}
int main(){
    Newton(0.5);
    Bisec(0.5,0.6);
    return 0;
}