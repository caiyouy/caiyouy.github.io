#include <stdio.h>
#define Max 100

int isReverse(char string[])
{
    int i, j;
    for(j=0;string[j]!='\0';j++);
    i=0, j=j-1;
    while(i<j)
    {
        if(string[i]==string[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    if(i>=j)
        return 1;
    else
        return 0;
}

int main()
{
    char string[Max];
    scanf("%s",string);
    printf("%d\n",isReverse(string));
}