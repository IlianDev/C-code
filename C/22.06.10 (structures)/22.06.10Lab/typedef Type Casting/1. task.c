/*
Задача 1. Дефинирайте структура като потребителски тип.Инициализирайте
членовете на структурата, използвайки новия потребителски тип. Отпечатайте.
*/
#include <stdio.h>

typedef struct {
    char name[20];
    int id;
} student;

int main()
{
    student list[3];
    for (int i = 0; i < 3; i++)
    
    
        scanf("%s", list[i].name);
        scanf("%d", &list[i].id);
    }
    printf("students:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("The %d student is: \t", i);
        printf("%d %s \n", list[i].id, list[i].name);
    }
    
    

}