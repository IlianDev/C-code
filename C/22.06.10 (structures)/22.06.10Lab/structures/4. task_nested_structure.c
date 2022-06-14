/*
Задача 4. Напишете произволна програма, която да демонстрира уменията
ви да боравите с nested structure.
*/

#include<stdio.h>
#include<math.h>
//nested structure
struct firm{
    struct people{
        char name[100];
        float salary;
        int years;
}worker;
    char adress [30];
    int year;
};

int main()
{
    struct firm my_firm =
    { {"Angel", 2.500, 28},"Sofia", 2020 };
    //printing the name:
    printf("The name is: %s\n", my_firm.worker.name); // Angel;
}