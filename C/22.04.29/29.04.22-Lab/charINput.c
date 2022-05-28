// #include<stdio.h>
// int main()
// {
// char c,d;
// printf("Enter two characters: ");
// scanf("%c", &c);
// scanf("%c", &d);
// printf("%c..%c\n", c, d);
// }

#include <stdio.h>

int main()
{
    char c,d;
    printf("Enter two characters: ");
    scanf("%c", &c);
    scanf(" %c", &d); // zaduljitelno slagame space!!!
    printf("%c..%c", c,d);
    return 0;
}
