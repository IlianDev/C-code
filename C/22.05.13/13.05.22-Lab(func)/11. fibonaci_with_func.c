#include<stdio.h>

int fibonacci();

int main(){
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("%d", fibonacci(n));
    return 0;
}

int fibonacci(int n){
    int first = 1;
    int second = 1;
    int next = 0;

    for (int i = 3; i < n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }
    return next;
}