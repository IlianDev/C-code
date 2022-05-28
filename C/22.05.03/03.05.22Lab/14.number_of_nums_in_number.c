#include<stdio.h>
int main()
{
    int num=100;
    int a =0;
    do
    {
        num=num/10;
        a++;
    } while (num>0);
    printf("%d",a);
}