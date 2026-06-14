#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, sum, digit, count;
    
    printf("Enter the start of range: ");
    scanf("%d", &start);
    
    printf("Enter the end of range: ");
    scanf("%d", &end);
    
    printf("Armstrong numbers between %d and %d are: \n", start, end);
    
    for (num = start; num <= end; num++) {
        temp = num;
        count = 0;
        sum = 0;
        
        // Count digits
        while (temp != 0) {
            count++;
            temp /= 10;
        }
        
        temp = num;
        
        // Calculate sum of digits raised to power of count
        while (temp != 0) {
            digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }
        
        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
    
    return 0;
}
