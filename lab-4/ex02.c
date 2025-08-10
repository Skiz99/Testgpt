#include <stdio.h>

int main(void)
{
    int count = 0;
    int num, sum = 0;

    while (count < 10)
    {
        printf("%d.Enter the number: ", count + 1);
        if (scanf("%d", &num) != 1)
            return 1;
        sum += num;
        count++;
    }

    printf("Total sum is %d\n", sum);

    return 0;
}

