/*
Функцията isalnum() в езика за 
програмиране C проверява дали даденият 
символ е буквено-цифров или не. функцията isalnum() 
е дефинирана в заглавния файл ctype.h. Буквено-цифров: 
Символ, който е или буква, или число. Синтаксис:

Връща 0, ако подаденият аргумент не е буквено-цифров символ
Връща стойност, различна от нула, ако подаденият аргумент е буквено-цифров символ
*/

#include <ctype.h>
#include <stdio.h>
 
int main()
{
    char ch = 'a';
 
    // checking is it alphanumeric or not?
    if (isalnum(ch))
        printf("\nEntered character is alphanumeric\n");
    else
        printf("\nEntered character is not alphanumeric\n");
}
// Entered character is alphanumeric