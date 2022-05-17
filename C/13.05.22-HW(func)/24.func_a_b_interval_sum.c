/* 
24.Функция, която по зададени граници на интервал [a,b] , намира и
извежда сумата от четните числа от този интервал.
*/ 

#include<stdio.h>

long int evenSum(int a, int b);

int main()
{   
    int a, b;
    printf("enter a:\n");
    scanf("%d",&a);
    
    printf("enter b:\n");
    scanf("%d",&b);

    printf("the even sum of the range is %ld", evenSum(a,b));
    return 0;
}

long int evenSum(int a, int b){
    long int evens_sum;
    for (int i =a ;  i<= b; i++)
    {
        if (i % 2 == 0)
        {
            evens_sum +=i;
        }
    }
    return evens_sum; 
}