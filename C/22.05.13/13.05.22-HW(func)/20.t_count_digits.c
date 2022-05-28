/*
20. Напишете програма на C за броене на цифрите на дадено число с
помощта на рекурсивна функция.
*/
 
#include <stdio.h>
 
int countDigits(int num)

int main()
{
    int number;
    int count=0;
     
    printf("Enter a positive integer number: ");
    scanf("%d",&number);
     
    count=countDigits(number);
     
    printf("Total digits in number %d is: %d\n",number,count);
     
    return 0;
}

int countDigits(int num){
    static int count=0;
     
    if(num>0)
    {
        count++;
        countDigits(num/10);
    }
    else
    {
        return count;
    }

}