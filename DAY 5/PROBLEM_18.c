#include <stdio.h>

// Function to find factorial of a digit
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is strong
int isStrongNumber(int n) {
    int original = n;
    int sum = 0;
    
    // Sum of factorials of all digits
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    
    // A strong number equals the sum of factorials of its digits
    return (sum == original);
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (isStrongNumber(num)) {
        printf("%d is a strong number\n", num);
    } else {
        printf("%d is not a strong number\n", num);
    }
    
    return 0;
}
