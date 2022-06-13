#include<stdio.h>

struct distance
{
    int km;
    int m;
    int sm;
} first, second;

int main()
{
    printf("Enter information: \n");
    printf("Enter distance: \n");
    scanf("%d", &first.km);
    scanf("%d", &first.m);
    scanf("%d", &first.sm);

    printf("Enter information: \n");
    printf("Enter distance: \n");
    scanf("%d", &second.km);
    scanf("%d", &second.m);
    scanf("%d", &second.sm);

    int a = first.m/1000;
    int b = first.sm/100000;
    int result = first.km + a + b;

    printf("Sum first: %d\n", result);
    printf("...the same...");

}