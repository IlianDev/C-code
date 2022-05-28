#include<stdio.h>
int reverse();
int main()
{
    int arg;
    printf("Type here number: \n");
    scanf("%d", &arg);

    printf("%d", reverse(arg));
}

int reverse(int num){
    int result = 0;
    while (num>0)
    {
        num = num%10;
        result = result*10 + num;
        num /= 10;
    }
    return result;
}