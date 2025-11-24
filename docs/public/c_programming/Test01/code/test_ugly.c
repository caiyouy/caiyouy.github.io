#include <stdio.h>

/*
int isUgly(int x)
{
		// Recursion exit
		if(x==1)
		{
				return 1;
		}
		// Recursion
		if(x%2==0)
		{
				return isUgly(x/2);
		}
		if(x%3==0)
		{
				return isUgly(x/3);
		}
		if(x%5==0)
		{
				return isUgly(x/5);
		}
		// Have other factors
		return 0;
}
*/

int isUgly(int x)
{
		// Module all 2,3,5 factors 
		while(x!=1)
		{
				if(x%2==0)
				{
						x=x/2;
						continue;
				}
				if(x%3==0)
				{
						x=x/3;
						continue;
				}
				if(x%5==0)
				{
						x=x/5;
						continue;
				}
				break;
		}
		// Check
		if(x==1)
		{
				return 1;
		}
		else
		{
				return 0;
		}
}

int main()
{
		printf("Num \t isUgly\n");
		int x=6;
		printf("%d  \t %d\n",x,isUgly(x));
		x=9;
		printf("%d  \t %d\n",x,isUgly(x));
		x=14;
		printf("%d  \t %d\n",x,isUgly(x));
		x=121;
		printf("%d  \t %d\n",x,isUgly(x));
		x=1024;
		printf("%d  \t %d\n",x,isUgly(x));
		return 0;
}
		

