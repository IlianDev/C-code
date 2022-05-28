#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    double result = 1;

    for (int i = 1; i < n; i++)
    {
        if (i % 2 != 0)
        {
            result*=i;
        } 
    }
    printf("%.2lf\n", result);
    return 0;
}