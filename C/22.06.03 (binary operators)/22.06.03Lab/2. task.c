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

int bitAt(int num, int i);

int main()
{
    int number;
    int index;
    int result;
    
    printf("Enter number:\n");
    scanf("%d", &number);

    printf("----------\n");
    
    printf("Enter the index of the bit you would like to know:\n");
    scanf("%d", &index);

    printf("----------\n");

    result = bitAt(number, index);
    printf("This bit is = %d", result);


    return 0;
}

int bitAt(int num, int i)
{
    int bit;

    if (num & (1<<i))
    {
        return 1;
    }else{
        return 0;
    }
    
}