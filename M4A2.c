#include <stdio.h>

int main() {
    int N;
    int sum = 0;

    // Prompt user for input
    printf("Enter an integer N (>= 1): ");
    scanf("%d", &N);

    // Validate input
    if (N < 1) {
        printf("N must be greater than or equal to 1.\n");
        return 1;
    }

    // Calculate sum of squares from 1 to N
    for (int i = 1; i <= N; i++) {
        sum += i * i;
    }

    // Output result
    printf("The sum of squares from 1 to %d is %d\n", N, sum);

    return 0;
}