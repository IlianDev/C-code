#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link; 
};

void count_of_nodes(struct node *head);
void add_at_end(struct node *head, int data);
void print_data(struct node *head);


int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head ->link = NULL;

    struct node *current = malloc(sizeof(struct node)); 
    current ->data = 98;
    current ->link = NULL;
    head -> link = current;

    struct node *current2 = malloc(sizeof(struct node));
    current2 ->data = 3;
    current2 ->link = NULL;
    current ->link = current2;

    add_at_end(head, 67);

    count_of_nodes(head);
    
    print_data(head);

    return 0;
}

void count_of_nodes(struct node *head){
    int count = 0;
    if (head == NULL)
        printf("Linked list in empty");
    
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count ++;
        ptr = ptr->link; // every ittereation will point the next link;
    }
    printf("The count of nodes is: %d \n", count);
}

void add_at_end(struct node *head, int data){ // data = 67;
    struct node *ptr, *temp;
    ptr = head;
    
    temp = (struct node *)malloc(sizeof(struct node)); // creating a new node for 67
    temp -> data = data;    // data = 67;
    temp -> link = NULL;

    while (ptr -> link != NULL)
    {
        ptr = ptr->link;
    }
    ptr -> link =temp; // where data is 3 link is NULL so we update the link with the temp;
    
}


void print_data(struct node *head){
    if (head == NULL)
    {
        printf("Linked list in empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    printf("The nodes are: "); 
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link; // every ittereation will point the next link;
    }
}
    
