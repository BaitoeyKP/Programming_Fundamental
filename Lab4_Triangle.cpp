#include <stdio.h>
int main()
{
	int x, y, z, a, b, c, t;
	printf("Enter three numbers : ");
	scanf("%d %d %d", &x, &y, &z);
	if (x > y && x > z)
	{
		c = x;
		b = y;
		a = z;
	}
	else if (y > x && y > z)
	{
		c = y;
		b = x;
		a = z;
	}
	else if (z > x && z > y)
	{
		c = z;
		b = x;
		a = y;
	}
	if (c * c == a * a + b * b)
	{
		// t = (1 / 2) * a * b;
		t = (a * b) / 2;
		printf("Area of triangle is %d", t);
	}
	else
	{
		printf("0");
	}
	return 0;
}
