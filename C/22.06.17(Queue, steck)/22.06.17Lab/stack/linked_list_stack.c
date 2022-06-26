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

    if (newNode == NULL){
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
    // 2. Update the temporary pointer so that it can point the first node
    temp = top;

    if(isEmpty()){
        printf("Stack Underflow.");
        exit(1);
    }

    // 3. Store value of the first node somewhere
    int val = temp->data;
    // 4. update the top pointer to point to the next node
    top = top->link;
    // 5. delete the node;
    free(temp);
    temp = NULL;
    return val;
}   

void print(){
    struct node* temp;
    temp = top; // assign the first node to temp;

    if(isEmpty())
    {
        printf("stack underflow");
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
        printf("1. Push\n");
        printf("2. Print\n");
        printf("3. Quit\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d", &data);

        if (choice == 1)
        {
            printf("Enter the element to be pushed:");
            scanf("%d", &data);
            push(data);
            break;
        }
    
        else if (choice == 2)
        {
            print();
            break;
        }
        else if(choice == 3)
        {
            exit(1);
        }
                
        else{
             printf("Wrong choice\n");
            break;
        }
    }
    return 0;
}