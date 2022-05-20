#include<stdio.h>

int main()
{
    int arr[5];
    int arr_coppy[5];

    //reading array:
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // coppy array
    for (int i = 0; i < 5; i++)
    {
        arr_coppy[i] = arr[i];
    }
    
    //print arr
    printf("Print original array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }

    //Print coppied array:
    printf("\nPrint coppied array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr_coppy[i]);
    }
    return 0;
}
