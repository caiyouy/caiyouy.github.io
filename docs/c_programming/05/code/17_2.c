#include <stdio.h>
#include <math.h>
void double_power(double x,int n){
if(n>=1)
{
    long int k;
    double pi;
    for(k=1,pi=1;k<=n;k=k+1)
    pi=pi*x;
    printf("The power is %f",pi);}
else if(n==0)
    printf("%f",1.000000000000);
else
{
    long int k;
    double pi;
    for(k=1,pi=1;k<=-n;k=k+1)
    pi=pi/x;
    printf("The power is %f",pi);
}
}

int main(){
    double a;
    int b;
    scanf("%lf %d",&a,&b);
    double_power(a,b);

    return 0;
}