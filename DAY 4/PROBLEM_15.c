#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, sum = 0, digit, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    temp = num;
    
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
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }
    
    return 0;
}
