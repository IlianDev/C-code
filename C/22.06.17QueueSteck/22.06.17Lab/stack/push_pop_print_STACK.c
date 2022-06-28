#include <stdlib.h>
#define MAX 4

int stack_arr[MAX]; // global stack declaration with capacity of 4
int top = -1; // indicates stack is empty
// if there are four elements in the stack, then the top will be full top = 3;


///////////// PUSH /////////////////
void push(int data) // the type of function is void because we don't want to return anything from this push function
{
    // required to check stack is full
    if (top == MAX -1){
        printf("stack overflow");
        return;
    }
    top = top + 1; // this will replace the value of top with 0;
    stack_arr[top] = data; // push at index 0;
}


///////////// POP /////////////////
int pop(){
    int value;

    // first check if stack is empty
    if(top == -1){
        printf("stack underflow\n");
        exit(1); // we call exit() function it means termination of the program with failure
    }
    value = stack_arr[top]; // here we wil store the value in the stack = 4 (the last value)
    
    // this will give the user an illusion that the element is delited
    top = top -1; // it will become 2 (when we had 4 elements in the stack here was 3)
    return value; // data variable will recieve the value 
}


//////////// PRINT ////////////////
void print_stack(){
    int i;
    
    if(top == -1){
        printf("stack underflow\n");
        return;
    }
    for ( i = top; i >= 0; i--)
    {
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}

int main()
{
    int data;
    printf("Enter the stack elements: \n");
    for (int i = 0; i < MAX; i++)
    {
        printf("Element %d: ", i);
        int num;
        scanf("%d", &num); 
        push(num);
    }; 
    // push(1);
    // push(2);
    // push(3);
    // push(4);

    data = pop(); 
    data = pop();
    print_stack();
    return 0;
}