/*
2) Създайте функция bitAt. Функцията получава
параметър число и индекс. Тя връща стойността на бита
на съответния индекс.


Enter number:
5 --> 00000101
----------
Enter the index of the bit you would like to know:
2
----------
This bit is = 1
*/

#include <stdio.h>

int bitAt(int number, int index);

int amin()
{
int a = 0b0011;
int b = 0b1101;

printf("%d", bitAt(b , 3));
}

int bitAt(int number, int index)
{
    return (number >> index) & 1;
}