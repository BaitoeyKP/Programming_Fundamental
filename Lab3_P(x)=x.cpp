#include <stdio.h>
int main()
{
	int a = 2;
	int b = 1;
	int sum = 0;
	while (a <= 10000)
	{
		while (a / 2 >= b)
		{
			if (a % b == 0)
			{
				sum = sum + b;
			}
			b++;
		}
		if (a == sum)
		{
			printf("P(%d) = %d\n", a, sum);
		}
		a++;
		sum = 0;
		b = 1;
	}
	return 0;
}
