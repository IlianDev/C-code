#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d", &a ,&b);
    int sum =0;

while (a<=b)
{
    sum += a;
    a++;
}
printf("%d\n", sum);
}