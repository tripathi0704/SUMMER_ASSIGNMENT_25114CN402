#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, sum;
    int found = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target sum: ");
    scanf("%d", &sum);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d, %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    if (found == 0)
    {
        printf("No pair found with given sum\n");
    }
    return 0;
}
