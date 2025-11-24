#include <stdio.h>
#include <math.h>

void solve(double a,double b,double c)
{
	double d=b*b-4*a*c; 
	if(a!=0.0)
	{
		if(d>0)
			printf("Two real solutions: x_1=%f,x_2=%f.",-b/2/a+sqrt(d)/2/a,-b/2/a-sqrt(d)/2/a);
		else if(d==0)
			printf("One double solution: x=%f.",-b/2/a);
		else
			printf("Two complex solutions:x_1=%f+%fi,x_2=%f-%fi.",-b/2/a,sqrt(-d)/2/a,-b/2/a,sqrt(-d)/2/a);
	}
	else
	{
		if(b!=0.0)
			printf("One root:x=%f.",-c/b);
		else
		{
			if(c==0.0)
				printf("Every number is a solution.");
			else
				printf("No solution.");
		}
	}
} 

int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	solve(a,b,c);
	return 0;
}
