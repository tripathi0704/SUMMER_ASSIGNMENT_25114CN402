#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int largest, secondLargest;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    secondLargest = -1;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    printf("Largest element = %d\n", largest);
    printf("Second Largest element = %d\n", secondLargest);
    return 0;
}
