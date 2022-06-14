/*
Задача 5. Напишете произволна програма, която демонстрира уменията ви
да боравите с указатели към структури. Нека декларираната от вас
структура(и) съдържа указател към собствения си тип.

*/

#include<stdio.h>
#include<string.h>

struct people{
    char name[100];
    float salary;
    int year;
    struct people *next;
}worker;

int main()
{
    struct people list1;
    strcpy(list1.name, "Kiril");
    list1.salary = 3000;
    list1.year = 35;

    struct people list2;
    strcpy(list2.name, "Kiril");
    list2.salary = 3200;
    list2.year = 45;

    list1.next = &list2;
    
    float salary_salary = list1.next -> salary;
    printf("%.2f", salary_salary); // 3200;

}
