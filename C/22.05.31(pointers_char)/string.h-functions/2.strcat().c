#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "This is ", str2[] = "concatenation";

    // concatenate str1 and str2
    // so the result will be stored in str1

    strcat(str1, str2);
    puts(str1); // This is concatenation
    puts(str2); // concatenation

    printf("%s", str1); //This is concatenation
}