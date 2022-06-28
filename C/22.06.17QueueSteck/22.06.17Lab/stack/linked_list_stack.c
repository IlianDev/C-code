#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
} *top = NULL;

int isEmpty(){
    if(top == NULL)
        return 1;
    else
        return 0;
}

void push(int data){
    struct node* newNode;
    newNode = malloc(sizeof(newNode));

    if (newNode == NULL)
    {
        printf("Stack Overflow.");
        exit(1);
    }

    newNode->data = data;
    newNode->link = NULL;

    newNode->link = top;
    top = newNode;
}

int pop(){
    // 1. create a pointer 
    struct node* temp;
    int val;
   
    if(isEmpty()){
        printf("Stack Underflow.");
        exit(1);
    }
     // 2. Update the temporary pointer so that it can point the first node
    temp = top;
    // 3. Store value of the first node somewhere
    val = temp->data;
    // 4. update the top pointer to point to the next node
    top = top->link;
    // 5. delete the node;
    free(temp);
    temp = NULL;
    return val;
}   

int peek()
{
    if(isEmpty())
    {
        printf("Stack Underflow.");
        exit(1);
    }
    return top -> data;
}

void print(){
    struct node* temp;
    temp = top; // assign the first node to temp;

    if(isEmpty())
    {
        printf("Stack underflow");
        exit(1);
    }
    printf("The stack elements are: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }
    printf("\n");
}

int main()
{
    int choice, data;
    while (1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed:");
            scanf("%d", &data);
            push(data);
            break; 
        
        case 2:
            data = pop();
            printf("Deleted element is %d", data);
            break;

        case 3:
            printf("The topmost element is: %d\n", peek());
        
        case 4:
            print();
            break;
        
        case 5:
            exit(1);
            
        default:
            printf("Wrong choice\n");
        }
    }
    return 0;
}