/*
Промяна на стойностите на параметрите (скалари и масиви) при
използване на функции
*/
#include<stdio.h>

void film(int,char[ ]);

int main(){
    int i = 5;
    char x[ ] = "you and me";
    printf("i = %d, x = %s\n", i, x);
    film(i, x);
    printf("i = %d, x = %s\n", i, x);
}
void film(int i, char z[ ])
{
    printf("\n In the film, i = %d, z = %s \n", i, z);// you and me 
    i = 0;
    z[0] = 'Y';
    printf("In the film, i = %d, z = %s \n", i, z); // You and me 
}
