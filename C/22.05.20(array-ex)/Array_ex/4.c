/*
Когато се предава масив на функция, промените, 
които функцията може да
направи, ще засегнат масива, 
тъй като функцията има адреса на този масив.
*/

#include<stdio.h>
void AddOne(int,int[ ]);
int main()
{
    int i, a[4] = {20, 40, 10, 60};
    printf("In main() \t a = %p \t &a[0] = %p \n", a, &a[0]);
    AddOne(a[2], a);
    for(i = 0; i <= 3; i = i + 1)
        printf("a[%d] = %d \n", i, a[i]);
}
void AddOne(int one, int x[ ]) // one = a[2] -->10
{
    int i;
    printf("In AddOne() \t x = %p \t &x[0] = %p \n", x, &x[0]);
    for(i = 0; i <= 3; i = i + 1)
        x[i] = x[i] + one;
}

