#include<stdio.h>

long fibonacci(int n){
    if (n == 1 || n==2) 
    {
        return 1;
    }
    else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
    
}


int main(){
    int num;
    printf("number:");
    scanf("%d", &num);
    printf("%ld", fibonacci(num));
}

// num=2 --> fib(2) return 1;
// num=3 --> fib(3) --> fib(2)+fib(1) == 1 + 1= 2;
// num=4 --> fib(4) --> fib(3)+fib(2) == fib(2)+ fib(1) + 1 = 1+1+1;




