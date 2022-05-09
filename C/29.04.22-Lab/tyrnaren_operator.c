#include <stdio.h>

int main()
{
    int nA;
    scanf("%d", &nA);
    int nB = 18;
    int bigger = (nA>nB) ? nA : nB; // тук веднага ме пита кое е по голямо? като съкратена иф проверка и ми върни по голямото
    printf("%d", bigger);
    // int nB = (nA == 1) ? 2 : 0;
    // printf("A value is %d\n", nA); 
    // printf("B is %d\n", nB);
    return 0;

}