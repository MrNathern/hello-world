#include <stdio.h>
#include <time.h>

int closed(int n){
    return 2 * (n-1) +1;
}

int recursion(int n){
    if (n==1) return 1;
    else{
        int prev = recursion(n-1);
        return prev + 2;

    }
}

int iterative(int n){
    int val;
    for (int i = 1; i<n-1; i++){
        val +=2;
    }
}

int main(){
    int n = 5000;

    clock_t startc = clock();
    int closedform = closed(n);
    clock_t endc = clock();
    printf("Closed: %d, time: %ld\n", closedform, endc - startc);

    clock_t starti = clock();
    int iterativeform = iterative(n);
    clock_t endi = clock();
    printf("Iterative: %d, time: %ld\n", iterativeform, endi - starti);

    clock_t startr = clock();
    int recursiveform = recursion(n);
    clock_t endr = clock();
    printf("Recurisve: %d, time: %ld\n", recursiveform, endr - startr);
    //printf("Iterative: %d\n", iterative(n));
    //printf("Recursive: %d\n", recursion(n));

    return 0;
}