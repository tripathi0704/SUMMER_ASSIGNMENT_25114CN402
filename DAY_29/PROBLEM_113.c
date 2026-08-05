#include <stdio.h>

int power(int base, int exponent)
{
    int result = 1;
    int i;

    for (i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main()
{
    int choice;
    int a, b;

    do
    {
        printf("\n=== Menu Driven Calculator ===\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 6)
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice)
        {
            case 1:
                printf("Result = %d\n", a + b);
                break;
            case 2:
                printf("Result = %d\n", a - b);
                break;
            case 3:
                printf("Result = %d\n", a * b);
                break;
            case 4:
                if (b != 0)
                {
                    printf("Result = %.2f\n", (float)a / b);
                }
                else
                {
                    printf("Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if (b != 0)
                {
                    printf("Result = %d\n", a % b);
                }
                else
                {
                    printf("Modulus by zero is not allowed.\n");
                }
                break;
            case 6:
                if (b >= 0)
                {
                    printf("Result = %d\n", power(a, b));
                }
                else
                {
                    printf("Exponent must be non-negative.\n");
                }
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    }
    while (choice != 7);

    return 0;
}