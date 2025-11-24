#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void process(FILE * fpr2, FILE * fpw, char * word){
    int i;
    char line[200]={0};
    fprintf(fpw, "%s ", word);
    rewind(fpr2); // 必要的操作
    for (i = 1; 1; i++)
    {
        if (fgets(line,200,fpr2)==NULL)
        {
            break;
        }
        if (strstr(line,word)!=NULL)
        {
            fprintf(fpw,"%d ", i);
        }
    }
    fprintf(fpw,"\n");
    return;
}

int main(int argc, char const *argv[])
{
    FILE *fpr1, *fpr2, *fpw;
    char word[20]={0};
    if ((fpr1=fopen(argv[1],"r"))==NULL || (fpr2=fopen(argv[2],"r"))==NULL)
    {
        printf("Error!\n");
        return 0;
    }
    fpw=fopen("8write","w");
    while ((fscanf(fpr1,"%s",word))==1) //不断读入单词
    {
        process(fpr2,fpw,word); //进行处理
    }
    fclose(fpr1);
    fclose(fpr2);
    fclose(fpw);
    return 0;
}
