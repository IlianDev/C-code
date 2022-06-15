#include<stdio.h>

typedef struct some_struct
{
    char c;
    int i;
}some_struct_t;

int main()
{
    some_struct_t t0 = {
        .c = "a",
        .i = 0,
    };
    some_struct_t t1 = {
        .i = 1,
        .c = "b"
    };

    printf("%d", t0.i); //0;

    return 0;
}