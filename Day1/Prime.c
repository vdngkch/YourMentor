//print all the prime numbers btw 1 and n
#include <stdio.h>

int prime(int num) {
    if (num <= 1) return 0; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        if (prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
