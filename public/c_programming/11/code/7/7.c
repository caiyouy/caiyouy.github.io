#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double ssum=0.0;

void crg(FILE *fp){
	char name[256];
	double sum=0.0,deg,upr;
	while(fgets(name,256,fp)!=NULL)
	{
		sum=0;
		while(fscanf(fp,"%lf%lf",&deg,&upr)==2)
		sum+=deg*upr;
		printf("%s----------------------%.2f\n",name,sum);
		ssum+=sum;
	}
}

int main(int argc,char *argv[]){
	char name[256];
	FILE *fp;
	while(1){
		printf("File name (end-of-file to end):\n");
		if(scanf("%255s",name)==EOF){
			printf("The total charge is %.2f.\n",ssum);
			break;
		}
		if((fp=fopen(name,"r"))==NULL)
			fprintf(stderr,"Can't open file:\n%s\n",name);
		else{
			crg(fp);
			fclose(fp);
		}
	}
	printf("Bye!\n");
	return 0;
} 
