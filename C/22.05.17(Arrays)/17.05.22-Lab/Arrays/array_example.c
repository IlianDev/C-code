#include<stdio.h>

int main()
{
    char szName [] = "Ivan Ivanov";
    printf("%c\n", szName[10]); // v

    int szWorkDays [31] = {34, 12};
    szWorkDays [10] = 5;
    printf("%d\n", szWorkDays[10]); // 5
}