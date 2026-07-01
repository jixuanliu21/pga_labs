#include <stdio.h>

//Iterative
//long long占8个字节
long long fib_iterative(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    long long prev2 = 0; 
    long long prev1 = 1; 
    long long current = 0;

    for (int i = 2; i <= n; i++) {
        current = prev1 + prev2; 
        prev2 = prev1;
        prev1 = current;
    }
    return current;
}

// Recursive
long long fib_recursive(int n) {
    // Base Case 
    if (n <= 0) return 0;
    if (n == 1) return 1;

    // Recursive step
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int main() {
    int x;
    printf("Enter a positive number X: ");
    scanf("%d", &x);

    // lld=long long decimal
    printf("Iterative result for position %d: %lld\n", x, fib_iterative(x));

    printf("Recursive result for position %d: %lld\n", x, fib_recursive(x));

    return 0;
}