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

struct node *del_last(struct node *head){
    // check if head is equal to NULL.
    if(head == NULL) printf("Already deleted!");  
    
    else if(head -> link == NULL){ // check if there is a node in the linked list
        free(head);
        head = NULL; 
    }

    // declaring this two pointer temp and temp2 that points the first node of the list
    else{
        struct node *temp = head;
        struct node *temp2 = head;

        while (temp -> link != NULL) // traversing
        {
            temp2 = temp; // puts the adress of temp inside the temp2;
            temp = temp -> link; // move the pointer temp;
        }
        temp2 -> link = NULL;
        free (temp);
        temp = NULL;
    }
    return head;
}

// struct node* del_first(struct node *head){
//     if(head == NULL){
//         printf("List is already empty!\n");
//     }
//     else{
//         struct node *temp = head; // create new pointer temo which point the first pointer head
//         head = head->link; // move over the head pointer to strike the second node
//         free(temp); // free the memory for this node
//         temp = NULL; // but the temp still contains the adress "1000"
//     }
//     return head;
// }

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

    // printf("After deleting first node: \n");
    // head = del_first(head); 
    // print_data(head); 

    printf("After deleting the last node: \n");
    head = del_last(head);
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->link;
    }
}



