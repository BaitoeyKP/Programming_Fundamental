#include <stdio.h>

int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    int i = 0;
    while (i < a)
    {
        int j = 0;
        while (j < a)
        {
            if (i == 0 || i == a - 1 || j == 0 || j == a - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
