#include<stdio.h>
#include<math.h>

void solution(double a,double b,double c)
{
	double delta;
	delta=(b*b)-4*a*c;
	if (delta>0){
		printf("root1=%lf\n",(-b+sqrt(delta))/2/a);
		printf("root2=%lf",(-b-sqrt(delta))/2/a);
	}
	else {
	    if(delta==0){
		    printf("root=%lf",-b/2/a);
	    }
	    else {
		printf("root1=%lf+%lf*i\n",-b/2/a,sqrt(-delta));
		printf("root2=%lf-%lf*i",-b/2/a,sqrt(-delta));
	    }
    }
} 

int main(){
	double a,b,c;
	scanf("%lf\n%lf\n%lf",&a,&b,&c);
	solution(a,b,c);
	return 0;
}
