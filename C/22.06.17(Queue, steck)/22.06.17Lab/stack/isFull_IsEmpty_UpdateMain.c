#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[MAX]; // global stack declaration with capacity of 4
int top = -1; // indicates stack is empty
// if there are four elements in the stack, then the top will be full top = 3;

/////////////  isFull()  //////////////
// it is a good idea to check whether the stack is full or not (Write a separatre function)
// if stack is full, then this function will return 1.
int isFull() 
{
    if(top == MAX - 1)
        return 1; // stack is full;
    else
        return 0; // stack is not full;
}

/////////////  isEmpty() ///////////////
// check whether the stack is empty or not (Write a separatre function)
int isEmpty()
{
    if(top == -1)
        return 1; // stack is empty
    else
        return 0; // stack is not empty
}

/////////////  PUSH  /////////////////
// pushing elements onto the stack 
void push(int data) // the type of function is void because we don't want to return anything from this push function
{
    // required to check stack is full
    if (isFull()) {
        printf("stack overflow");
        return;
    }
    top = top + 1; // this will replace the value of top with 0;
    stack_arr[top] = data; // push at index 0;
}

/////////////  POP  /////////////////s
// deleting the last element from stack
int pop(){
    int value;

    // first check if stack is empty
    if(isEmpty()){
        printf("stack underflow\n");
        exit(1); // we call exit() function it means termination of the program with failure
    }
    value = stack_arr[top]; // here we wil store the value in the stack = 4 (the last value)
    
    // this will give the user an illusion that the element is delited
    top = top -1; // it will become 2 (when we had 4 elements in the stack here was 3)
    return value; // data variable will recieve the value 
}

int peek() // gives us the top most element from stack;
{
    if(isEmpty()){
        printf("stack underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

////////////  PRINT  ////////////////
void print_stack(){
    int i;
    
    if(isEmpty()){
        printf("stack underflow\n");
        return;
    }
    printf("The elements are:\n");
    for ( i = top; i >= 0; i--)
    {
        printf(" %d ", stack_arr[i]);
    }
    printf("\n");
}

int main()
{
    int choice, data; // choice is the choice of the user, data is the number;

    while(1)
    {
        printf("\n");
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. Print the top element: \n");
        printf("4. Print all the elements of the stack: \n");
        printf("5. Quit: \n");
        printf("\nPlease enter your choice: \n");
        scanf("%d", &choice);
    
        switch(choice) 
        {
        case 1: // push
            printf("Enter the element you want ot be pushed: ");
            scanf("%d", &data);
            push(data);
            break;
        
        case 2: // push
            printf("You've choosed to delete an element: ");
            data = pop();
            printf("Deleted element is %d\n ", data);
            break;
        
        case 3:
            printf("The topmost element of the stack is %d\n", peek());
            break;

        case 4:
            print_stack();
            break;
        
        case 5:
            exit(1);
            
        default:
            printf("Wrong choice\n");
        }
    }
    return 0;
}