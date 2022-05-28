#include<stdio.h>
int main()
{
    int ia = 13;
    int* pValue = NULL;
    pValue = &ia;
    printf("\nAdress of variables ia is: %p\n", pValue);
    printf("\nValue of varialbles ia is: %d\n", *pValue);
    return 0;
}

// Adress of variables ia is: 0000000ede7ffaf4