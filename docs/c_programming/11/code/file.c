#include <stdio.h>

int main()
{
    FILE* fp;
    char tmp_1[100], tmp_2[100];
    fp=fopen("test.txt","r");
    fscanf(fp,"%s",tmp_1);
    printf("%s",tmp_1);

    fscanf(fp,"%s",tmp_1);
    printf("%s",tmp_1);
    
    fscanf(fp,"%s",tmp_1);
    printf("%s",tmp_1);
    
    fclose(fp);

    printf("\n");
/*
    fp=fopen("test.txt","r");
    fgets(tmp_2,100,fp);
    printf("%s",tmp_2);
    fclose(fp);
    printf("\n");
*/
    return 0;
}
