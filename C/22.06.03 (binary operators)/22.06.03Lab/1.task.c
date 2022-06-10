/*
1)Направете побитовите операции върху целите числа 3 и 5 в main().
Покажете резултата с функцията printf(“%d”, res);
AND operation   OR operat   ion XOR operation
  00000011       00000011        00000011
& 00000101    |  00000101      ^ 00000101
 ________        ________        ________
 00000001 = 1    00000111 = 7    00000110 = 6
*/

//направете побитови операции върху целите числа 3 и 5
// в main() покажете резултата 

#include <stdio.h>

int main()
{
    int mask = 0b00000000;
    int a = 0b00000011;
    int b = 0b00000101;

    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("---------------\n");

    a = a^a;
    printf("a^a = %d\n", a);

    a = 0b00000011;
    b = 0b00000101;
    int res_and = a&b;
    printf("result A&B = %d\n", res_and);

    a = 0b00000011;
    b = 0b00000101;
    int res_or = a|b;
    printf("result A|B = %d\n", res_or);

    
    a = 0b00000011;
    b = 0b00000101;
    int res_xor = a^b;
    printf("result A^B = %d\n", res_xor);

    return 0;
}