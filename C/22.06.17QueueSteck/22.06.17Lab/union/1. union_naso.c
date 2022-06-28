#include<stdio.h>

//  a and b has diff locations
// struct abc{
//     int a;  
//     int b;
// }


// adreses of a nd b are the same (share the same memory location)
union abc{
    int a;
    char b;
} var;

int main()
{
    var.a = 65;
    printf("a = %d\n", var.a); // a = 65
    printf("b = %cn", var.b); // b = 65
    // they are share the same memory location so b=65 so in ascii 65 is capital A

    return 0;
}