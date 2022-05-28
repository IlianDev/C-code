#include<stdio.h>
#define SIZE 3 // Max array size;
// ot B to A;
int main()
{
    int a[SIZE] = {1, 2, 3};
    int b[SIZE] = {10, 20, 30};
    
    int i;

    for (i = 0; i < SIZE; i++)
    {
        *(a+1)=*(b+i);
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%d\t", *(a+i));
    }
    return 0;
}