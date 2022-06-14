#include<stdio.h>

struct test_struct{
    int number;
    float rate;
}

int main ()
{
    struct test_struct a = {1, 5.5};
    struct test_struct b = {.number = 1, .rate = 5.5};

}