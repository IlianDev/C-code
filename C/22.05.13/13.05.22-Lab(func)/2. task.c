/*
Напишете следните функции:
● Функция, която проверявя дали едно число е просто
● Функция, която връща най-големия общ делител на две числа
● Функция, която използва горната функция и по даден като параметър
 масив от цели числа, връща НОД на елементите от масива
*/

#include<stdio.h>

int check_prime_number(int n)
{
    int flag = 0, i;

    if (n == 0 || n == 1){
        flag = 1;
    }

    for (i = 2; i <= n / 2; ++i) {

        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    // flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
}

int gcd_two_nums(int n1, int n2){
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d",n1);
}

int gcd_array(int arr[], int n){
    
}

int main()
{
    int num_1, num_2, num_3, arr[4];
    printf("Enter a number to check if it is prime (positive integer): \n");
    scanf("%d", &num_1);
    check_prime_number(num_1);
    
    printf("\n");
    printf("Enter two numbers to check GCD:\n");
    scanf("%d", &num_2);
    scanf("%d", &num_3);
    gcd_two_nums(num_2, num_3);

    
      
}