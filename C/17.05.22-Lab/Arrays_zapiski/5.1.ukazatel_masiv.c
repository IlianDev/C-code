#include<stdio.h>
int main()
{
    int arr[5];
    int * ptr = arr; // указателя присвоява името на масива.
    // което означава, че към елементите от масива можем да се обръщаме чрез този указател.

    arr[0] = 10; // Stores 10 at 0th element of array [10, 0, 0, 0, 0]
    ptr[1] = 20; // Stores 20 at 1st element of array [10, 20, 0, 0, 0]
    ptr = arr; // ptr and arr both points to 0th element of array

    *ptr = 100; // Stores 100 at 0th element of array (Since ptr points at arr[0])
    *arr = 100; // Stores 100 at 0th element of array

    ptr++; // ptr now points at arr[1]
    ptr--; // ptr now points back at arr[0]

    int * ptr = arr; // Integer pointer pointing at arr[0]
    *(ptr + 4) = 100; // Assigns 100 to arr[4].

    *(arr + 0) = 10; // Assigns 10 to arr[0]
}

// Aко елемента не е в масива:

