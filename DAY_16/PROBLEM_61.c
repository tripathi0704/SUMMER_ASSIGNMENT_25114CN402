#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int actualSum, expectedSum;
    printf("Enter size of array (n elements from 1 to n+1 with one missing): ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    actualSum = 0;
    for (i = 0; i < n; i++)
    {
        actualSum = actualSum + arr[i];
    }
    expectedSum = (n + 1) * (n + 2) / 2;
    printf("Missing number = %d\n", expectedSum - actualSum);
    return 0;
}
