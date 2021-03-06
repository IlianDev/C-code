#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link; 
};

void add_at_pos(struct node *head, int data, int pos);

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

    add_at_pos(head, 63, 3);
    struct node *ptr = head;

    count_of_nodes(head);
    
    print_data(head);

    return 0;
}

void add_at_pos(struct node *head, int data, int pos){
    struct node *ptr = head; // point to the first node of the linked list

    //creating new node 
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2 -> data = data; 
    ptr2 ->link = NULL;

    pos --; // 3;
    while (pos != 1)
    {
        ptr = ptr ->link; // updating the ptr to the next link 
        pos --;
    }
    ptr2 -> link = ptr ->link; 
    ptr -> link = ptr2;
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
    
