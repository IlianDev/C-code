#include<stdio.h>
int main()
{
    short int a[3] = {1,2,3};
    int len = sizeof(a)/sizeof(a[0]); // 3
    printf("%d", len);  //3 
}
