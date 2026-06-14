#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, c;
    
    printf("Enter the position (n): ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input\n");
    } else if (n == 1) {
        printf("The %d th Fibonacci term is: %lld\n", n, a);
    } else if (n == 2) {
        printf("The %d th Fibonacci term is: %lld\n", n, b);
    } else {
        for (i = 2; i < n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("The %d th Fibonacci term is: %lld\n", n, b);
    }
    
    return 0;
}
