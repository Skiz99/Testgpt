#include <stdio.h>

int main(void)
{
    int num;

    do
    {
        printf("Enter the number: ");
        if (scanf("%d", &num) != 1)
            return 1;

        if (num == 0)
        {
            printf("Exiting Program... Bye\n");
        }
        else if (num % 2 == 0)
        {
            printf("%d is even.\n", num);
        }
        else
        {
            printf("%d is odd.\n", num);
        }
    } while (num != 0);

    return 0;
}

