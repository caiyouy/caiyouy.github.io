#include<stdio.h>
#include<math.h>

int isperfect(long n)
{
	int i = 2, sum = 0;
	while (i <= sqrt(n))
	{
		if (n%i == 0 && i != sqrt(n))
			sum = sum + i + n / i;
		else if (n%i == 0 && i == sqrt(n))
			sum = sum + i;
		i++;
	}
	sum = sum + 1;
	return sum == n ? 0 : (sum < n ? -1 : 1);
}

int main()
{
	long n, m, a=0, b=0, c=0;
	for (n = 0; n <= 1000; n++)
	{
		if (isperfect(n) == 0)
			printf("%d\n", n);
	}
	for (n = 1000; n <= 9000; n = n + 1000)
	{
		for (m = n + 1; m <= n + 1000; m++)
		{
			if (isperfect(m) == -1)
				a = a + 1;
			else if (isperfect(m) == 0)
				b = b + 1;
			else
				c = c + 1;
		}
		printf("from %d to %d: %d %d %d\n", n + 1, n + 1000, a, b, c);
		a = 0, b = 0, c = 0;
	}
	for (n = 10000; n <= 90000; n = n + 10000)
	{
		for (m = n + 1; m <= n + 10000; m++)
		{
			if (isperfect(m) == -1)
				a = a + 1;
			else if (isperfect(m) == 0)
				b = b + 1;
			else
				c = c + 1;
		}
		printf("from %d to %d: %d %d %d\n", n + 1, n + 10000, a, b, c);
		a = 0, b = 0, c = 0;
	}
	return 0;
}
