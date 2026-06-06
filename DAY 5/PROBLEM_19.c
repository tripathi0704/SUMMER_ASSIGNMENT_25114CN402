#include <stdio.h>

// Function to print all factors of a number
void printFactors(int n) {
    printf("Factors of %d are: ", n);
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printFactors(num);
    
    return 0;
}
