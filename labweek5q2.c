#include <stdio.h>
#include <stdlib.h>
void sum(int *a, int *b, int *result)
{
    *result = *a + *b;
}

int main()
{
    int a, b, result;
    printf("Input the first number:");
    scanf("%d", &a);

    printf("Input the second number:");
    scanf("%d", &b);

    sum(&a, &b, &result);
    printf("The sum of the entered number is:%d", result);
    return 0;
}