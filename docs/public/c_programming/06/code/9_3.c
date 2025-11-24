#include <stdio.h>
#include <math.h>
double pi=3.14159265;


void pi_app(double error1,double error2,double error3){
    int i=0;
    long double sum=0.,p=0;
    double e=1.;
    while(e>=error1){
        i++;
        sum=sum+1./(i*i);
        p=sqrtl(6.*sum);
        e=fabs(p-pi);
    }
    printf("%.7Lf %.7Lf %d",sum,p,i);
    while(e>=error2){
        i++;
        sum=sum+1./(i*i);
        p=sqrtl(6.*sum);
        e=fabs(p-pi);
    }
    printf("%.7Lf %.7Lf %d",sum,p,i);
    while(e>=error3){
        i++;
        sum=sum+1./(i*i);
        p=sqrtl(6.*sum);
        e=fabs(p-pi);
    }
    printf("%.7Lf %.7Lf %d",sum,p,i);
    return;
}
int main(){
    pi_app(0.00001,0.000001,0.0000001);
    return 0;
}
