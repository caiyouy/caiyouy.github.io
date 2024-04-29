#include<stdio.h>

int main(){
    int i=1;
 while(i<=100){
    int x=(i%6)&&(i%7);if(x==0) printf("%d\n",i);
    else ;i=i+1;
 }
  i=1;
  printf("---\n");
 while(i<=100){
    int x=!((i%6)&&(i%7))&&(i%42);if(x==1) printf("%d\n",i);
    else ;i=i+1;
 }
 }