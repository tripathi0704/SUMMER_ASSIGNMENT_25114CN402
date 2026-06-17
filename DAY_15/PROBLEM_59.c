#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, d;
    int temp[100];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate right: ");
    scanf("%d", &d);
    d = d % n;
    for (i = 0; i < n; i++)
    {
        temp[(i + d) % n] = arr[i];
    }
    printf("Right rotated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");
    return 0;
}
