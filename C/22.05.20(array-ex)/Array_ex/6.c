/*
Извикване на функция с аргумент = елемент на масиви
eha извежда тези две числа и после ги прави 0.
*/

#include<stdio.h>

void eha(int,int);

int main()
{
    int i = 50, a[3] = {90, 80, 60};
    eha(i, a [ 0 ]); // 50, 90
    printf( "In main(), i = %d, a[0] = %d\n", i, a [0] ); // In main(), i = 50, a[0] = 90
}

void eha(int q, int w) // q = 50, w = a[0]-->90
{
    printf( "In eha(), q = %d, w = %d\n", q, w );
    q = 0;
    w = 0;
}