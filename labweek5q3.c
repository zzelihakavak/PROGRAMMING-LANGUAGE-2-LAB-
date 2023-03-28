#include <stdio.h>
#include <stdlib.h>
void elm(int *a, int *b, int *c, int *d, int *e)
{
    *a = 5;
    *b = 7;
    *c = 2;
    *d = 9;
    *e = 8;
}

int main()
{
    int a, b, c, d, e;
    elm(&a, &b, &c, &d, &e);
    printf("The elements you entered are:\n");

    printf("element-0:%d\n", a);

    printf("element-1:%d\n", b);

    printf("element-2:%d\n", c);

    printf("element-3:%d\n", d);

    printf("element-4:%d\n", e);

    return 0;
}
