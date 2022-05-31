/*
Задача 4. Напишете функция void sort_arr(void *A, int n, int dir, ftype fp),
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
 
// Function to sort 
void sort(int n, int* ptr)
{
    int i, j, t;
 
    // Sort the numbers using pointers
    for (i = 0; i < n; i++) {
 
        for (j = i + 1; j < n; j++) {
 
            if (*(ptr + j) < *(ptr + i)) {
 
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
 
    // print the numbers
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
 
int main()
{
    int n = 5;
    int arr[] = { 0, 23, 14, 12, 9 };
 
    sort(n, arr);
 
    return 0;
}