#include <stdio.h>

void displayArray(int arr[], int n)
{
    int i;

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100];
    int n, choice, i, pos, value, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n=== Array Operations ===\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Sort Array\n");
        printf("6. Reverse Array\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                displayArray(arr, n);
                break;
            case 2:
                printf("Enter position and value: ");
                scanf("%d %d", &pos, &value);
                if (pos >= 1 && pos <= n + 1)
                {
                    for (i = n; i >= pos; i--)
                    {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos - 1] = value;
                    n++;
                    printf("Element inserted.\n");
                }
                else
                {
                    printf("Invalid position.\n");
                }
                break;
            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                if (pos >= 1 && pos <= n)
                {
                    for (i = pos - 1; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted.\n");
                }
                else
                {
                    printf("Invalid position.\n");
                }
                break;
            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (arr[i] == value)
                    {
                        printf("Element found at position %d.\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                {
                    printf("Element not found.\n");
                }
                break;
            case 5:
                for (i = 0; i < n - 1; i++)
                {
                    int j;
                    for (j = 0; j < n - i - 1; j++)
                    {
                        if (arr[j] > arr[j + 1])
                        {
                            int temp = arr[j];
                            arr[j] = arr[j + 1];
                            arr[j + 1] = temp;
                        }
                    }
                }
                printf("Array sorted.\n");
                break;
            case 6:
                for (i = 0; i < n / 2; i++)
                {
                    int temp = arr[i];
                    arr[i] = arr[n - i - 1];
                    arr[n - i - 1] = temp;
                }
                printf("Array reversed.\n");
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