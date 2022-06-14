/*
Задача 4. Напишете произволна програма, която да демонстрира уменията
ви да боравите с nested structure.
*/

#include<stdio.h>
#include<string.h>

struct company{

    struct peope{
        char name[20];
        float salary;
        int age;
    }worker;

    char adress[30];
    int year;
}company;

int main()
{
    strcpy(company.worker.name, "Angel");
    company.worker.salary = 2500;
    company.worker.age = 35;

    printf("%s", company.worker.name); // Angel;
}

