#include <stdio.h>

int main(void)
{
    int num, i;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1)
        return 1;

    printf("Multiplication Table for %d:\n", num);
    for (i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

