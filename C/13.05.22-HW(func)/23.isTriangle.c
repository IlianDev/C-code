/*
23.Да се напише функция с име isTriangle, която по дадени три цели
числа определя дали съществува триъгълник със страни тези числа.
*/

#include<stdio.h>
#include<stdbool.h>

bool isTriangle(int a, int b, int c);

int main()
{   
    int a ,b ,c;
    printf("enter side a:\n");
    scanf("%d",&a);

    printf("enter side b:\n");
    scanf("%d",&b);

    printf("enter side c:\n");
    scanf("%d",&c);

    if (isTriangle(a,b,c))
    {
        printf("This IS a triangle!");
    }else{
        printf("This is NOT a triangle!");
    }
    
    return 0;
}

bool isTriangle(int a, int b, int c)
{
    if ((a+b>c) && (a+c>b) && (b+c>a))
    {
        return true;
    }
    return false;
    
}