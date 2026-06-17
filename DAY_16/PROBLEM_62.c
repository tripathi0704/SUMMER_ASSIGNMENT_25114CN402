#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j;
    int maxCount = 0;
    int maxElement = 0;
    int count;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d\n", maxCount);
    return 0;
}
