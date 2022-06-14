/*
Задача 6. Напишете програма, която да изчислява средния успех на всеки
студент и целия курс, използвайки структури. Входните данни за студентите
трябва да бъдат въведени от потребителя. Принтирайте резултатите за
всеки студент поотделно, както и за целия курс.
*/

#include<stdio.h>
#include<string.h>

struct students{
    char name[30];
    double average;
};

int main()
{
    struct students stud;
    double average = 0;
    int i;
    for (i = 0; i< 5; i++){
        printf("enter name: \n");
        scanf("%s", &stud.name);
        printf("enter average: \n");
        scanf("%lf", &stud.average);
        average += stud.average;
    }
    average = average/i;
    printf("%.2lf", average);
}