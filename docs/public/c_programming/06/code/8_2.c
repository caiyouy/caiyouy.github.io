#include <stdio.h>

void prt_pfactors(int n){
    int m;
	if(n>0){
    	for(m=2;m<=n;++m){
    		if(n%m==0){
    			printf("%d\n",m);
    			prt_pfactors(n/m);
    			break;
			}
		}
	}
	else{
		printf("-1\n");
			prt_pfactors(-n);
	}

}

int main () {

    int n;

    scanf("%d",&n);

    prt_pfactors(n);

    return 0;

}
