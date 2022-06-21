/*
|45|1000|  |98|3000| |3|NULL|      --> simple example 
we want to remove the first node from the list of nodes

First we need is to create a new pointer temp* which points the head.
After that we need to move the head pointer to the thex node (98);
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link; 
};

struct node* del_first(struct node *head){
    if(head == NULL){
        printf("List is already empty!\n");
    }
    else{
        struct node *temp = head; // create new pointer temo which point the first pointer head
        head = head->link; // move over the head pointer to strike the second node
        free(temp); // free the memory for this node
        temp = NULL; // but the temp still contains the adress "1000"
    }
    return head;
}

void print_data(struct node *head){
    if (head == NULL)
    {
        printf("Linked list in empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    printf("The nodes are: \n"); 
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link; // every ittereation will point the next link;
    }
}

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

    print_data(head); // 45 98 3

    printf("After deleting first node: \n");
    head = del_first(head); 
    print_data(head); 
}

