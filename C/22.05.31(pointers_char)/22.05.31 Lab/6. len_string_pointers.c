/*
6. Напишете програма, която намира дължината на въведен от клавиатурата
стринг, използвайки указатели.
*/

#include<stdio.h>
#include<string.h>

int main()
{
char str[20];
char *ptr;

printf("Enter any string: \n");
gets(str);
ptr = str;
int len = strlen(ptr);

printf("The string is %s and the length is: %d", ptr, len);
}



