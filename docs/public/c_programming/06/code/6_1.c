#include<stdio.h>
#include<math.h>
#include<time.h>

int isprime(int n){
	for(int m=2;m*m<=n;++m){
	   if (n%m==0)
	      return 0;}
	return 1;
} 

int main(){
	for(;;){ 
    	int a=0,t,n;double time1=0;
    	printf("请输入需要分解的偶数，输入奇数结束程序：") ;
      	scanf("%d",&n);
      	time1=clock();
    	if(n%2==0&&n>4){
    	    for(t=3;t<=n/2;t+=2){ 
	            if (isprime(t)&&isprime(n-t)){
	                printf("%d=%d+%d\n",n,t,n-t);
	                a=a+1;
                }
	     	} 
    	printf("共有%d组,用时%f秒\n\n",a,(clock()-time1)/CLOCKS_PER_SEC);
    	
    	}
    	else{
	        printf("程序结束");
	        return 0;
    }   
	} 
}


