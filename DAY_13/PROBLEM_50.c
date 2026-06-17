#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int sum = 0;
    float average;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    average = (float)sum / n;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
