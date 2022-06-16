/*
Задача 4. Дефинирайте тип указател към функция, която изпълнява определена
операция върху две целочислени променливи. Дефинирайте функции, които
изпълняват операциите +, -, *, /. Използвайте новия тип, за да извикате всяка една
от функциите.
*/

#include<stdio.h>

typedef int myfunction(int a, int b);

int add (int a, int b);
int minus(int a, int b);

int callerFunction(myfunction *p, int a, int b);

int main()
{
    int result;

    result = callerFunction(&add, 100, 1);
    printf("Add Result: %d\n", result);

    result = callerFunction(&minus, 100, 1);
    printf("Substract result: %d \n", result);

    return 0;
}

int add(int a, int b){
    return a + b;
}

int minus(int a, int b){
    return a -b;
}

int callerFunction(myfunction *p, int a, int b){
    return p(a, b);
}