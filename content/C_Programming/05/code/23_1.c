#include <stdio.h>
#include <math.h>


int main()
{
    int i;
    for(i=1;i<=100;i=i+1)
    if (i%6==0 || i%7==0){
        printf(" %d\n",i);
    }
printf(" ---\n");
int j;
for(j=1;j<=100;j=j+1)
if(j%6==0||j%7==0&&j%42!=0){
    printf(" %d\n",j);
}
    return 0;
}