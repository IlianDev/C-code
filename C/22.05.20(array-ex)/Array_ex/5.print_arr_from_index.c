/*
Използване на функция, която има параметър масив и функцията извежда
масива от позиция, която се посочва на вход, до края. 
*/

#include<stdio.h>
// #include<stdlib.h>

void cut_array(char[ ]);

void main(void)
{
    cut_array("abrakadabra");
    printf("\n");
}
void cut_array(char x_string[ ])
{
    int j_index;
    printf("Enter an integer: ");
    scanf("%d", &j_index);
    
    printf("In res(), x = %s \n", x_string + j_index);
}

