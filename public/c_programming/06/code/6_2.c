#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime(int n){
 int m;
 for(m=2;m<=n;++m){
 if(n%m==0){
 break;
 }
 }
 if(m==n)
     return 1;
 else
     return 0;
}

int main(){
 int m,n,t;
 scanf("%d",&n);
 for(m=6;m<=n;m=m+2){
 for(t=3;t<=m-3;t=t+2){
 if (prime(t)==1 && prime(m-t)==1){
 printf("%d=%d+%d\n",m,t,m-t);
 break;
 }
 }
 if(t==m-3 && m>=8){
     printf("推翻了哥德巴赫猜想！！！！！！\n");
     break;
 }}
 if(m==n+2)
 printf("哥德巴赫猜想在小于等于%d成立\n",n);
    return 0;
}
