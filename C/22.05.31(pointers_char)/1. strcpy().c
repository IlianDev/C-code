#include<stdio.h>
#include<string.h>

int main()
{
    char s[] = "asd123";
    char name[] = "abc";

    strcpy(s, name); 
    printf("%s\n", s); // "abc"

    char strName[] = "students Ivan";
    strcpy(s, strName);
    printf("%s\n", s); //students Ivan

    // int length = strlen(s);
    // printf("%d", length);

    // char *u = "abc\nsdf "; //

    // printf("1. %c \n", s[6]); // 3
    // printf("2. %c \n", s[7]); // empty
    // printf("4. %c\n", u);

    // printf("3. %c", *(u+1)); // s
}

//копира стринга  str1 във стринга str2, като
// връща str2


