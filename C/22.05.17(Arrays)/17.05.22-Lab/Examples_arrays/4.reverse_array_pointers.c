#include<stdio.h>

int main()
{
    int a[] = {1,2,3};
    int size = sizeof(a)/sizeof(a[0]);

    for (int i = 0; i < size/2; i++)
    {
        int temp = *(a+i);
        *(a+i) = *(a+(size -1 -i));
        *(a+(size -1 -i)) = temp;
        
    }
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d \t", i, *(a+i));
    }
}

