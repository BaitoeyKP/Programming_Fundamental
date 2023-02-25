#include <stdio.h>
int main()
{
	int i = 10;
	int *p;
	p = &i;
	printf("i=%d  *p=%d\n", i, *p);
	i = 20;
	printf("i=%d  *p=%d\n", i, *p);
	*p = 30;
	printf("i=%d  *p=%d\n", i, *p);
	return 0;
}
