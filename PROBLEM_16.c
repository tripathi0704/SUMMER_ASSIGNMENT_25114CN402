#include <stdio.h>

int main() 
{
    int start, end;

    printf("Enter range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong Numbers are:\n");

    for(int num = start; num <= end; num++) 
    {
        int temp = num;
        int sum = 0, rem;

        while(temp > 0)
         {
            rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }
    return 0;
}