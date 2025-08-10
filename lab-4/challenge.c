#include <stdio.h>

int main(void)
{
    int option;
    double balance = 0.0;
    double amount;

    while (1)
    {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        if (scanf("%d", &option) != 1)
            return 1;

        switch (option)
        {
        case 1:
            printf("Current Balance: %.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            if (scanf("%lf", &amount) != 1)
                return 1;
            if (amount > 0)
                balance += amount;
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            if (scanf("%lf", &amount) != 1)
                return 1;
            if (amount > balance)
            {
                printf("Insufficient funds.\n");
            }
            else
            {
                balance -= amount;
                printf("Withdrawal successful.\n");
            }
            break;
        case 4:
            printf("Thank you for using the ATM.\n");
            return 0;
        default:
            printf("Invalid option. Try again.\n");
        }
    }

    return 0;
}

