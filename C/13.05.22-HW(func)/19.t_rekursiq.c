/*
19. Да се напише рекурсивна функция
int numPrint(int n),
С помощта на която се отпечатват всички естествени числа до 100.
*/

#include<stdio.h>  
  
void numPrint();  
  
int main()  
{  
    int number;  
  
    printf("Enter the number:\n");  
    scanf("%d", &number);  
  
    printf("Numbers from 1 To %d are:", number);  
    numPrint(number);  
  
    return 0;  
}  
  
void numPrint(int num)  
{  
    if(num)  
        numPrint(num-1);  
    else  
        return;  
  
    printf("\n%d\n", num);  
}  