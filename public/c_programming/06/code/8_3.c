#include <stdio.h>
int i=2;
void prt_pfactors(int n){
    if(n<0){printf("-1\n");
            n=-n;}
    while(n!=1){
        while((n%i==0)){
        	printf("%d\n",i);
        	n=n/i;
		}
		i++;
    }
}
int main () {
    int n;
    scanf("%d",&n);
    prt_pfactors(n);
    return 0;
}
