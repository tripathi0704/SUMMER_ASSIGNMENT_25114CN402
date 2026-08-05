#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int choice, len, i, flag;

    printf("Enter first string: ");
    scanf(" %99[^\n]", str1);

    do
    {
        printf("\n=== String Operations ===\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Reverse\n");
        printf("6. Palindrome Check\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                len = strlen(str1);
                printf("Length = %d\n", len);
                break;
            case 2:
                strcpy(str2, str1);
                printf("Copied string: %s\n", str2);
                break;
            case 3:
                printf("Enter second string: ");
                scanf(" %99[^\n]", str2);
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated string: %s\n", temp);
                break;
            case 4:
                printf("Enter second string: ");
                scanf(" %99[^\n]", str2);
                if (strcmp(str1, str2) == 0)
                {
                    printf("Strings are equal.\n");
                }
                else
                {
                    printf("Strings are not equal.\n");
                }
                break;
            case 5:
                len = strlen(str1);
                printf("Reverse: ");
                for (i = len - 1; i >= 0; i--)
                {
                    printf("%c", str1[i]);
                }
                printf("\n");
                break;
            case 6:
                len = strlen(str1);
                flag = 1;
                for (i = 0; i < len / 2; i++)
                {
                    if (str1[i] != str1[len - i - 1])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag)
                {
                    printf("String is palindrome.\n");
                }
                else
                {
                    printf("String is not palindrome.\n");
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