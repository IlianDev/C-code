#include<stdio.h>

int plus (int a, int b);
int minus (int a, int b);

int pointerFn();

int main()
{
    pointerFn();

    return 0;
}

// functions
int plus(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

//pointer
int pointerFn()
{
    //declare
    int result;
    int (*ptr) (int, int);

    ptr = plus;
    result = (*ptr) (4,2);
    printf("Plus: %d\n", result);

    ptr = minus;
    result = (*ptr) (4,2);
    printf("Minus: %d", res);
}