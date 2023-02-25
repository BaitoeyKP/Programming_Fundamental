#include <stdio.h>
int main()
{
	int n;
	int i, j, k;
	printf("Enter number : ");
	scanf("%d", &n);
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		for (k = 2 * n - 1 - 2 * i; k >= 1; k--)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < n * 2; i++)
	{
		printf("*");
	}
	printf("\n");
	for (i = n - 1; i >= 1; i--)
	{
		for (j = i; j >= 1; j--)
		{
			printf("*");
		}
		for (k = 1; k <= 2 * n - 1 - 2 * i; k++)
		{
			printf(" ");
		}
		for (j = i; j >= 1; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
