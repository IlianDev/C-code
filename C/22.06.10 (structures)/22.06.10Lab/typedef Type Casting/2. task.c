/*
Задача 2. Създайте нов потребителски тип към тип long long int. Използвайте го
във функцията printf, отпечатайте размера.
*/

#include<stdlib.h>

int main()
{
    typedef long long int long_int;

    printf("%d", sizeof(long_int));//
}