#include<stdio.h>
int main()
{
    int array [3];
    int *ptr = array;

    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
}
