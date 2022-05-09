#include<stdio.h>

int main()
{
    float a,b, result;
    int N;
    do
    {
        //numbers:
        printf("a:\n");
        scanf("%f", &a);
        printf("b:\n");
        scanf("%f", &b);

        //formatter: 
        printf("N:\n");
        scanf("%d", &N);
        
    } while (b==0 && 1>=N >=100);
    result = a/b;
    printf("%.2f", result);
}
