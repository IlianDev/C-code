#include<stdio.h>

int main()
{
    int num;
    printf("Number:\n");
    scanf("%d", &num);

    if(num%2==0)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}