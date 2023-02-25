#include <stdio.h>
int main()
{
	int number;
	int p = 2;
	printf("Enter number : ");
	scanf("%d", &number);
	printf("Factoring Result : ");
	while (number > 1 && p < number)
	{
		if (number % p == 0)
		{
			printf("%d x ", p);
			number = number / p;
		}
		else
		{
			p = p + 1;
		}
	}
	printf("%d", p);
	return 0;
}
