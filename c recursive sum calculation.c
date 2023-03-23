#include <stdio.h>

int sum(int n) {
    if (n == 0) {
        return 0;
    } 
    else {
        return n + sum(n-1);
    }
}

int main() {
    int n = 100;
    int result = sum(n);
    printf("The sum of all numbers up to %d is %d\n", n, result);
    return 0;
}