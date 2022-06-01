#include<stdio.h>

int add(int a, int b);
void fnPointer();

int main()
{

fnPointer();
return 0;

}

int add(int a, int b){
    return a + b;
}

void fnPointer(){
    int (*ptr_fn) (int, int) = add;

    int result = (*ptr_fn) (2, 4);

    printf("Result = %d\n", result);
}