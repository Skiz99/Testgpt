#include <stdio.h>

int main(void)
{
    int i, num, sum = 0;
    double average;

    for (i = 0; i < 10; i++)
    {
        printf("%d.Enter the number: ", i + 1);
        if (scanf("%d", &num) != 1)
            return 1;
        sum += num;
    }

    average = sum / 10.0;

    printf("total sum is %d\n", sum);
    printf("Average is %.2f\n", average);

    return 0;
}

