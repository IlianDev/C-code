#include<stdio.h>

int pluss();
// int minus();
// int mult();
// float del();

int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d\n", pluss(num1, num2));
}

int pluss(int par1, int par2){
    int result = par1 + par2;
    return(result);
}
