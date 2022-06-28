#include <string.h>

union abc
{
    int a;
    char b;
    double c;
    float d;
};

int main(){
    printf("%ld", sizeof(union abc)); // 8 (the largest)

    return 0;
}

/*
IN MY MACHINE:

size of int: 4 bites
size of char: 1 bites
size of double: 8 bites
size of float: 4 bytes

*/
