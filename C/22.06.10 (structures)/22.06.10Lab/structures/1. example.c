#include<stdio.h>
//basic syntax for struct:
struct test_struct{
    int number;
    float rate;
    
};

int main()
{
    struct test_struct a = {1, 5.5};
    // if we want to change the places as we want:
    struct test_struct b = {.number = 2, .rate = 7.7};

    //printing
    printf("Testing struct %d\n", a.number); // 1
    printf("Testing struct number = %d, rate = %.2f\n", b.number, b.rate);
}
