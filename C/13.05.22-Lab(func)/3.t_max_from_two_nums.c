#include<stdio.h>

int returnMax();

int main()
{
    int a,b,x;

    printf("Enter nubers:");
    scanf("%d", &a);

    printf("Enter nubers:");
    scanf("%d", &b);

    printf("Enter nubers:");
    scanf("%d", &x);

    printf("%d", returnMax(a,b));
}

int returnMax(int a, int b){
    return(a>=b)? a:b;
}

