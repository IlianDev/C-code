/*
Промяна на адресите на параметрите (скалари и масиви) при
използване на функции
*/

#include<stdio.h>
void film(int,char[ ]);

int main()
{
    int i = 5;
    char x[ ] = "you and me";
    printf("1. i = %d, x = %s \n&i = %p, &x[0] = %p\n", i, x, &i, &x[0]);
    film(i, x);
    printf("2. i = %d, x = %s \n&i = %p, &x[0] = %p\n\n", i, x, &i, &x[0]);
}
void film(int i, char z[ ])
{
    printf("\n3. In the film(), i = %d, z = %s \n&i = %p, &z[0] = %p\n\n", i, z, &i, &z[0]);
    i = 0;
    z[0] ='M';
    printf("4. In the film(), i = %d, z = %s \n&i = %p, &z[0] = %p\n\n", i, z, &i, &z[0]);
}
