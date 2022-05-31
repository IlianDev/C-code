/*Задача 4. Напишете функция void sort_arr(void *A, int n, int dir, ftype fp),
където А е обикновен масив от цели числа,
n - размера на масива,
dir - посоката, в която да бъде сортиран масива,
ftype - указател към функция, която приема масив, неговия размер и в каква посока да бъде
сортиран входния масив.
ftype трябва да сортира масива във възходящ или низходящ ред в зависимост от третия
параметър на функцията.
Принтирайте изходния и резултатни масиви.
*/
#include <stdio.h>
#include <stdlib.h>
void printArray(int *array, int size);
void sortDes(int *arr, int size);
void sortAsc(int *arr, int size);
void sort_arr(void *A, int n, int dir, void (*fp[])(int *, int));
#define options 2
int main()
{
    int size = 0;
    int choise = 0;
 
    printf("Enter size of the array: ");
    scanf("%d", &size);
 
    int *arr = calloc(size, sizeof(int));
 
    for (int i = 0; i < size; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }
 
    printf("Enter \"0\" if you want the array to be sorted in asc order\nEnter \"1\" if you want the array to be sorted in des order\n");
    scanf("%d", &choise);
 
    void (*ptr[options])(int *, int) = {sortAsc, sortDes};
    sort_arr(arr, size, choise, ptr);
 
    return 0;
}
 
void sortDes(int *arr, int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                // swap(&arr[i],&arr[j]);
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArray(arr, size);
}
void sortAsc(int *arr, int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                // swap(&arr[i],&arr[j]);
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printArray(arr, size);
}
 
void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
void sort_arr(void *A, int n, int dir, void (*fp[])(int *, int))
{
    fp[dir](A, n);
}