#include <stdio.h>

int main()
{
		float a=178.125;
		char *p=(char *)&a;
		for(int i=0;i<sizeof(float);i++)
		{
				char tmp=*(p+i);
				for(int j=0;j<8;j++)
				{
						printf("%d",(tmp>>j)&1);
				}
				printf(" ");
		}
		printf("\n");
		return 0;

}
