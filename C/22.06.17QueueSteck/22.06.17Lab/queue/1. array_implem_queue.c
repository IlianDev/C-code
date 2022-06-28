#include<stdio.h>
#include<stdlib.h> // required for exit(1) function

#define MAX 100

int queue[MAX];
int front = -1; // first element index
int rear = -1; // the last element index

// prototypes:
void enqueue(int); // only add but not return value;
int dequeue(); // delete and return the deleted element
int peek(); // first element in queue;
void print_queue(); // print queue
int isFull(); // either true or false
int isEmpty(); // either true or false (1 or 0)
int main()
{
    int choice, data;
    while (1)
    {
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Print the first element\n");
        printf("4. Print all the elements\n");
        printf("5. Quit\n");
        printf("---------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice); 

        switch (choice)
        {
        case 1:
            printf("Enter the element to be added to the queue: ");
            scanf("%d", &data);
            enqueue(data);
            printf("Element is added to the queue successfully\n");
            break;
        
        case 2:
            data = dequeue();
            printf("Deleted element is %d", data);
            break;
        
        case 3:
            printf("The first element is:%d\n", peek());
            break;
        
        case 4:
            print_queue();
            break;
        
        case 5: 
            exit(1);

        default:
            printf("\n Entered choice is not correct\n");
            break;
        }
    }
}

void enqueue(int data) // add
{
    if(isFull())
    {
        printf("Queue overflow\n");
        exit(1);
    }

    if (front == -1)
        front =0;
    rear ++;
    queue[rear] = data;
}

int dequeue() // delete
{
    int data;
    if(isEmpty())
    {
        printf("Queue Underflow.\n");
        exit(1);
    }
    data = queue[front];
    front ++;
    return data;
}


int peek()
{
    if(isEmpty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return queue[front];
}

int isEmpty()
{
    if(front == -1 || front == rear + 1)
        return 1;
    else    
        return 0;
}

int isFull()
{
    if(rear == MAX -1)
        return 1;
    else
        return 0;
}

void print_queue()
{
    int i;
    if(isEmpty())
    {
        printf("Queue Underflow.\n");
        exit(1);
    }
    printf("Queue: \n");
    for(i = front; i < rear; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}


/*
-> If front = -1 and rear =-1 OR front = rear +1, than the queue is empty;

-> (If front = rear, than it indicates that there is one element in the queue except the initial empty queue indicated by 
the front = -1 and rear = -1)

-> if rear = MAX = -1, then it indicates that the queue is full. 
*/