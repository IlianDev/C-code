#include<stdio.h>

#define STRING_LEN 10

int main()
{
    char dept [STRING_LEN];
    int course_num;
    char days [STRING_LEN];
    int time;

    printf("Enter departmment, course number, days, and ");;
    printf("time like this: <\n COSC 2060 MWF 1410\n> ");

    scanf("%s%d%s%d", dept, &course_num, days, &time);
    printf("%s %d meets %s at %d\n", dept, course_num, days, time);

return 0;
}
/*
Enter name: Dennis Ritchie
Your name is Dennis.

Even though Dennis Ritchie was entered in the above program, only 
"Dennis" was stored in 
the name string. It's because there was a space after Dennis.
*/
