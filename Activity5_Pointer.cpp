#include <stdio.h>
int main()
{
	char str[50];
	char *p;
	p = str;
	printf("Input string : ");
	scanf("%s", str);
	printf("%s\n", str);
	while (*p != '\0')
	{
		if (*p != *(p - 1))
		{
			printf("%c", *p);
		}
		p++;
	}
	return 0;
}
