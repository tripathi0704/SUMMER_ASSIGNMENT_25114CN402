#include <stdio.h>

struct Account
{
    int accountNumber;
    char name[50];
    float balance;
};

void createAccount(struct Account *account)
{
    printf("Enter account number: ");
    scanf("%d", &account->accountNumber);
    printf("Enter account holder name: ");
    scanf(" %49[^\n]", account->name);
    printf("Enter initial balance: ");
    scanf("%f", &account->balance);
}

void deposit(struct Account *account)
{
    float amount;

    printf("Enter deposit amount: ");
    scanf("%f", &amount);

    if (amount > 0)
    {
        account->balance += amount;
        printf("Amount deposited successfully.\n");
    }
    else
    {
        printf("Invalid amount.\n");
    }
}

void withdraw(struct Account *account)
{
    float amount;

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if (amount > 0 && amount <= account->balance)
    {
        account->balance -= amount;
        printf("Amount withdrawn successfully.\n");
    }
    else
    {
        printf("Insufficient balance or invalid amount.\n");
    }
}

void displayAccount(struct Account account)
{
    printf("\n=== Account Details ===\n");
    printf("Account Number: %d\n", account.accountNumber);
    printf("Name: %s\n", account.name);
    printf("Balance: %.2f\n", account.balance);
}

int main()
{
    struct Account account;
    int choice;

    createAccount(&account);

    do
    {
        printf("\n=== Bank Account System ===\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Display Account\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                deposit(&account);
                break;
            case 2:
                withdraw(&account);
                break;
            case 3:
                displayAccount(account);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    while (choice != 4);

    return 0;
}