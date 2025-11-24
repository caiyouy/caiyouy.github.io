#include<stdio.h>
#include<math.h>

double power(double x,int n){
	int i;
	double y=x;
	if(n>0){
		for(i=1;i<n;i++,x*=y)
		 ;		
	}
	else if(n==0)
	    x=1.0;		
	else if(n<0){
		for(i=1;i<-n;i++,x*=y)
		 ;
		x=1/x;		
	}
	return x;     	
}

int main(){
	double x;
	int n;
	
	scanf("%lf %d",&x,&n);
	printf("%f\n",power(x,n));

	return 0;
		
}