// проверява дали едно число е просто.
// При въвеждане на 3 числа да изведе само простите от тях

#include<stdio.h>

int isPrime();

int main()
{
    int num1, num2, num3;
    printf("Number: \n");
    scanf("%d", &num1);

    printf("Number: \n");
    scanf("%d", &num2);

    printf("Number: \n");
    scanf("%d", &num3);

    if (isPrime(num1)){
        printf("%d", num1);
    }
     if (isPrime(num2)){
        printf("%d", num2);
    }
     if (isPrime(num3)){
        printf("%d", num3);
    }
}

int isPrime(int n){
    for (int i = 2; i < n/2; i++)
    {
        if (n%2==0) // няма да е просто число
        {
            return 0;
        }
    }
    return 1;
}

