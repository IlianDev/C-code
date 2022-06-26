/*
|45 |1000|  |98 |3000| |3  |NULL|      --> simple example 
1000        2000       3000

delete the second node

Declare two pointers previos and current pointing to the first node
After that current pointer will point to the node we want to delete
and the previous pointer will point to node just before the node we want to delete

Update the te previous pointer to the current pointer (3000) previous -> link = current->link

*/

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link; 
};

void del_pos(struct node **head, int possition)
{
    struct node *current = *head;
    struct node *previos = *head;

    if (*head == NULL) // *head is looking to function del_pos()
        printf("List is already empty!");
    else if(possition == 1){
        *head = current->link;
        free(current);
        current = NULL;
    }
    else{
        while (possition != 1)
        {
            previos = current; 
            current = current->link;
            possition --;
        }
        previos -> link = current ->link;
        free(current);
        current = NULL;
    }
}

void print_data(struct node *head)
{
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
}

