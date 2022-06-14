#include<stdio.h>
#include<string.h>

struct strudent
{
    char name [20];
    int course;
    float grade;
    struct strudent *next;
};

int main()
{
    char n [] = "Ivan";
    int c = 1;
    float g = 5.90;

    struct strudent uchenik;
    strcpy(uchenik.name, n);
    uchenik.course = c;
    uchenik.grade = g;

    printf("%s", uchenik.course);
    
    struct strudent people;
    strcpy(people.name, "Peter");
    people.course = 2;
    people.grade = 4;

    uchenik.next = &people;

    
    printf("\n %s", uchenik.next -> name); //Peter
}