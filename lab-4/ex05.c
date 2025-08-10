#include <stdio.h>

int main(void)
{
    int num, i;
    long long factorial = 1;

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1 || num < 0)
        return 1;

    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    printf("Factorial of %d is %lld\n", num, factorial);

    return 0;
}

