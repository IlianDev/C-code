#include<stdio.h>
int readNumber();// протитип 

int main()
{
    printf("%d", readNumber());
    
}

int readNumber()
{
    int n;
    scanf("%d", &n);
    return n;
}






