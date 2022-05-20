#include<stdio.h>

int main()
{
    int *ptr; // декларираме указател от тип инт;
    int x;

    ptr = &x; // ptr съхранява адреса на &х (& - adress)
    *ptr = 0; // (* - стойността) Стойността към която сочи пойнтера да стане 0; => x= 0; 

    printf(" x = %d\n", x); // 0
    printf("  *ptr = %d\n", *ptr); // 0

    *ptr += 5; // поинтер += 5; => х=5;
    printf(" x = %d\n", x); // 5
    printf("  *ptr = %d\n", *ptr); // 5

    (*ptr) ++;
    printf(" x = %d\n", x); // 6
    printf("  *ptr = %d\n", *ptr); // 6
}