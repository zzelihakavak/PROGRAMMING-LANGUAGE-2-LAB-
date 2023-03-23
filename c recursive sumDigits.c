#include <stdio.h>

int sumDigits(int n);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sum = sumDigits(num);
    printf("The sum of digits of %d is %d\n", num, sum);
    return 0;
}

int sumDigits(int n) {
    if (n == 0) { 
        return 0;
    }
    return n % 10 + sumDigits(n / 10);  
}