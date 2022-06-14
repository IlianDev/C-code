/*
Задача 2. Напишете програма, която събира две дистанции, които са
изразени в километри, метри, сантиметри. Дистанциите трябва да бъдат
въведени от потребителя. Принтирайте изходните и резултатната
дистанция.

*/

#include<stdio.h>

struct distance
{
    int km;
    int m;
    int sm;
} first, second; // define first and second instances

int main()
{
    //first
    printf("Enter information: \n");
    printf("Enter distance: \n");
    scanf("%d", &first.km);
    scanf("%d", &first.m);
    scanf("%d", &first.sm);

    //second
    printf("Enter information: \n");
    printf("Enter distance: \n");
    scanf("%d", &second.km);
    scanf("%d", &second.m);
    scanf("%d", &second.sm);

    int a = first.m/1000;
    int b = first.sm/100000;
    int result = first.km + a + b;

    printf("Sum first: %d\n", result);
    printf("...the same...");

}