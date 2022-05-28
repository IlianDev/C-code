#include<stdio.h>

int main()
{
    int nA = 1;
    int nB = (nA==1) ? 2 : 0;
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);
}

// A value is 1
// B value is 2