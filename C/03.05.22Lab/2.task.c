#include<stdio.h>

int main()
{
    int num;
    printf("Type number: \n");
    scanf("%d", &num);

    if (num%5==0){
        printf("Deli se na 5");
    }
    else{
        printf("Ne se deli na 5");
    }
    return 0;
}