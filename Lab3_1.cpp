#include <stdio.h>
#include <string.h>
int main()
{
	char num1[100];
	char num2[100];
	char num3[100];
	int sum = 0;
	int i;
	printf("Enter number : ");
	scanf("%s", &num1);
	for (i = 0; i < strlen(num1); i++)
	{									  // strlen(num1) = array position
		sum = sum + ((int)num1[i] - '0'); //(int)num1[i] = int num in i position
	}
	printf("Result : %d", sum);
	if (sum >= 10)
	{
		sprintf(num2, "%d", sum); // sprintf(new, "%_", old) = change int to char
		sum = 0;
		for (i = 0; i < strlen(num2); i++)
		{
			sum = sum + ((int)num2[i] - '0');
		}
		printf(" -> %d", sum);
	}
	if (sum >= 10)
	{
		sprintf(num3, "%d", sum);
		sum = 0;
		for (i = 0; i < strlen(num3); i++)
		{
			sum = sum + ((int)num3[i] - '0');
		}
		printf(" -> %d", sum);
	}
	return 0;
}
