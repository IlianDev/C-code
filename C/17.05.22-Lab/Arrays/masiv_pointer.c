#include<stdio.h>

int main()
{
    int a[4] = {1,2,3,4};

    printf("1. %d\t\n", *a); // 1 (a e указател към първия баит от масива)
    printf("2. %d\t\n", a[0]); // 1
    printf("3. 0x%x\t\n", a); // 0xe69ffcf0 / адреса на началото на масива, което съвпада с адреса на а[0]
    printf("4. 0x%x\t\n", &a[0]); // 0xf89ff680

    // дължината 
    //int a[4] = {1,2,3,4};
    int len=sizeof(a)/sizeof(a[0]);
    printf("Len is: %d", len);
}