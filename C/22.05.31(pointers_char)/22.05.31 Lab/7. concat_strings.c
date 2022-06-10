# include<stdio.h>
#include<string.h>

int main()
{
    char str_1[20] = "Hello ";
    char str_2[20] = "world!";

    strcat(str_1, str_2);

    printf("%s\n", str_1);
}
