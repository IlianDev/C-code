/*
we can access union members through pointers by using the arrow (->) operator

*/
#include <stdio.h>

union abs
{
    int a;
    char b;
};

int main()
{
    union abc v;
    v.a = 90;

    union abc *p = &v;
    printf("%d %c", p->a, p->b); // 90 Z

    return 0;
}