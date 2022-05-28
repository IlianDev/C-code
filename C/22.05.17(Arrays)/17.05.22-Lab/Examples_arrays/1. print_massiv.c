// 1. Напишете програма, която въвежда и принтира елементитe на масив,
// използвайки указател.

#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int main()
{
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        printf("Type simb here:%d : ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}
