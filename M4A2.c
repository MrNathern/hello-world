#include <stdio.h>

int main() {
    int N;
    int sum = 0;

    
    printf("Enter an integer N (>= 1): ");
    scanf("%d", &N);

    
    if (N < 1) {
        printf("N must be greater than or equal to 1.\n");
        return 1;
    }

    
    for (int i = 1; i <= N; i++) {
        sum += i * i;
    }

   
    printf("The sum of squares from 1 to %d is %d\n", N, sum);

    return 0;
}