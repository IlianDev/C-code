/*
Задача 7.
Напишете масив от структури наречен key_tab[ ], като използвате тази,
дефинирана в горното упражнение - потребителски тип key_t, която
съдържа символен низ и число. Инициализирайте масива с всички
ключови думи на С, като заделяте паметта за всяка ключова дума
динамично. Принтирайте масива.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_LEN 20
#define SIZE_OF_KEY_T 30

typedef struct
{
    char str[MAX_LEN];
    int number;
} key_t;

void init();
void printArr(key_t *arr);

void init()
{
    key_t *words = (key_t *)malloc(sizeof(key_t) * SIZE_OF_KEY_T);

    strcpy(words[0].str, "auto");
    words[0].number = 1;

    strcpy(words[1].str, "break");
    words[1].number =2;

    strcpy(words[2].str, "case");
    words[2].number = 3;

    strcpy(words[3].str, "char");
    words[3].number = 4;

    strcpy(words[4].str, "continue");
    words[4].number = 5;

    strcpy(words[5].str, "do");
    words[5].number = 6;

    strcpy(words[6].str, "defaut");
    words[6].number = 7;

    strcpy(words[7].str, "const");
    words[7].number = 8;

    strcpy(words[8].str, "double");
    words[8].number = 9;

    strcpy(words[9].str, "else");
    words[9].number = 10;

    strcpy(words[10].str, "enum");
    words[10].number = 11;

    strcpy(words[11].str, "extern");
    words[11].number = 12;

    strcpy(words[12].str, "auto");
    words[12].number = 13;

    printArr(words);
    free(words);
}

void printArr(key_t *arr)
{
    for (int i = 0; i < SIZE_OF_KEY_T; i++)
    {
        printf("%d - %s \n", arr[i].number, arr[i].str);
    }
}

int main()
{
    
}