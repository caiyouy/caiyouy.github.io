#include <stdio.h>

int main()
{
		float a=-8.25;
		char *p=(char*)&a;

		*p=0xff;
		*(p+1)=0xff;
		*(p+2)=0x7f;
		*(p+3)=0x7f;

		printf("float a=%f\n",a);

		return 0;
}
