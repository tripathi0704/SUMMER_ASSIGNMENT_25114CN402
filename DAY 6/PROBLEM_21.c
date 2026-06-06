#include <stdio.h>
#include <string.h>

// Function to convert decimal to binary
void decimalToBinary(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }
    
    char binary[32] = "";
    int index = 0;
    
    while (n > 0) {
        binary[index] = (n % 2 == 0) ? '0' : '1';
        n = n / 2;
        index++;
    }
    
    // Print binary in reverse order
    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    
    decimalToBinary(num);
    
    return 0;
}
