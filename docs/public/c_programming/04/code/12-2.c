#include<stdio.h>
#include<math.h>

void solve2(double a,double b,double c)
{
	double delta=b*b-4*a*c;
	if(delta>0){
		printf("方程有两个实数解，%f,%f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a)); 
	}
	if(delta==0){
		printf("方程有一个实数解，%f",-b/a*0.5);
	}
	if(delta<0){
		printf("方程有两个虚数解，%f+%fi，%f+%fi",-b/a*0.5,sqrt(-delta)/(2*a),-b/a*0.5,-sqrt(-delta)/(2*a));
	}	
}

int main()
{
	double a,b,c; //不要忘了定义！注意不是int类型！！！ 
	printf("请输入三个系数：");
	while(scanf("%lf%lf%lf",&a,&b,&c)!=3)
    {//括号不要打错 
		//while(getchar()!='\n');
		printf("\n输入错误，请重新输入");
	}
	solve2(a,b,c);
	return 0;
} 
