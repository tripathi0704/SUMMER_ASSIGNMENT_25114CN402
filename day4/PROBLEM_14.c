#include <stdio.h>

int main()
 {
    int n, a = 0, b = 1, c;

    printf("Enter n: ");
    scanf("%d", &n);

    if(n == 1)
        printf("Nth Fibonacci term = 0");
    else if(n == 2)
        printf("Nth Fibonacci term = 1");
    else 
    {
        for(int i = 3; i <= n; i++) 
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("Nth Fibonacci term = %d", b);
    }
    return 0;
}