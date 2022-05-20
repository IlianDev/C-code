// не е свързан с конкретен тип

#include<stdio.h>
int main(){
    int a = 2;
    char c="K";

    void *ptr;

    ptr = &a;
    int *tmp = (int *)ptr;
    printf("After typecasting, a=%d\n", *tmp);

    ptr = &c;
    char *t = (char *)ptr;
    printf("After Typescript, a = %c", *t);
}

// After typecasting, a=2 
// After Typescript, a = P