#include<stdio.h>
#include<stdlib.h>

char *getText()
{
    char *temp;
    temp = malloc(6); // memory 
    // temp = malloc(8 * sizeof(char));

    temp = "Hello";
    return temp;
    // don't need to free, it automatically frees the memory in func
}

int main()
{
    char *text;
    text = getText();

    printf("%s", text);
    free(text); // free memory
}

