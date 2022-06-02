/*
4) Напишете програма на C, за да проверите дали даден низ е палиндром или не, без да
използвате цикъл.
*/

#include<stdio.h>
#include<string.h>

#define SIZE 100

int main()
{
    char string[SIZE], reversed_string[SIZE];
    int flag;

    printf("Enter word to see if it is palindrome: \n");
    scanf("%s", string);

    // coppy strint to reversed_string
    strcpy(reversed_string, string);
    strrev(reversed_string);

    flag = strcmp(string, reversed_string);

    if (flag == 0)
    {
        printf("The string is palindrome.");
    }
    else
    printf("The string is not palindrome");
}