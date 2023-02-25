#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, gcd;
	printf("Enter first number : ");
	scanf("%d", &a);
	printf("Enter second number : ");
	scanf("%d", &b);
	int x = abs(a);
	int y = abs(b);
	while (y != 0)
	{
		int t = y;
		y = x % y;
		x = t;
	}
	gcd = x;
	printf("The greatest common divisor = %d", abs(gcd));
	return 0;
}
