/*
Задача 6. Напишете структура с потребителски тип key_t, която съдържа
символен низ и число. Създайте променлива от новия тип, като
инициализирате символния низ с динамично заделена памет за него.
Принтирайте съдържанието на структурата.
*/

#include <stdlib.h>
#include<stdio.h>

typedef struct{
    char *s;
    int n;
}key_t;

int main()
{
    key_t a;

    a.n = 6;
    a.s = malloc(a.n);
    a.s = "This is something";

    printf("%d \t %d", sizeof(a.n), sizeof(key_t)); // 4 16;

    return 0;
}