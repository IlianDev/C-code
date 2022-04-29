#include <stdio.h>
#include<stdbool.h>
int main()
{
    printf("bool = %d bites\n", sizeof(bool));
    printf("char = %d bites\n", sizeof(char));
    printf("int = %d bites\n", sizeof(int));
    printf("short int = %d bites\n", sizeof(short));
    printf("long int = %d bites\n", sizeof(long));
    printf("long long int = %d bites\n", sizeof(long long));

    printf("unsigned int = %d bites\n", sizeof(unsigned char));
    printf("unsigned char = %d bites\n", sizeof(unsigned int));
    printf("double = %d bites\n", sizeof(double));
    printf("long double = %d bites\n", sizeof(long double));
    return 0;
}