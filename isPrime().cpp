#include <stdio.h>
int isPrime(int);
int main()
{
	int a;
	printf("Input number : ");
	scanf("%d", &a);
	if (isPrime(a) == 1)
		printf("Prime Number");
	else
		printf("Not Prime Number");
	return 0;
}

int isPrime(int x)
{
	if ((x == 1 || x % 2 == 0 || x % 3 == 0 || x % 5 == 0 || x % 7 == 0) && (x != 2 && x != 3 && x != 5 && x != 7))
		return 0;
	else
		return 1;
}
