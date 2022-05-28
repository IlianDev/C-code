#include<stdio.h>
int main(){
    double x;
    double y;
    char op = ' ';
    char result = 0;
    scanf("%lf%c%lf", &x, &op ,&y);


    switch (op)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;    
    case '/':
        result = x / y;
        break;
    default:
        printf("type anything else");
        break;
    }
    printf("%d", result);
}