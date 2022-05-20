#include<stdio.h>

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,8,9,10};

    int temp = 0;
    int let = sizeof(arr1)/ 4;

    for (int i = 0; i < let; i++)
    {
        temp = arr1[i]; // 1
        arr1[i] = arr2[i]; 
        arr2[i]=temp;
    }

    for (int j = 0; j < let; j++)
    {
        printf("First %d\t", arr1[j]);
        printf("Second %d\t", arr2[j]);
        printf("\n");
    }
    return 0;
    
}