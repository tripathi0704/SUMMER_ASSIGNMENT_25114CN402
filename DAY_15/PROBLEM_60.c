#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < n)
    {
        arr[j] = 0;
        j++;
    }
    printf("Array after moving zeroes to end: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
