/*
Да се напише функция, която намира и връща лицето на
правоъгълник.
*/

#include<stdio.h>

int rectangleArea(int a, int b);

int main()
{   int a, b;
    printf("Side a:\n");
    scanf("%d",&a);
    printf("Side b:\n");
     scanf("%d",&b);
    printf("The rectangle area is: %d", rectangleArea(a, b));
    return 0;
}

int rectangleArea(int a, int b)
{

     return a*b;
}