/*
|prev|data|next|
1000
head
*/


#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* add_To_Empty(struct node* head, int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;

    head = temp;
    return head;
}

struct node* add_at_beg(struct node* head, int data)
{
    struct node* temp = malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;    
    temp -> next = NULL;

    temp -> next = head;
    head -> prev = temp;
    head= temp;
    return head;
}

struct node* add_at_end(struct node* head, int data)
{
    struct node* temp, *tp;
    
    //create the new node
    temp = malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;

    tp = head;
    while (tp -> next != NULL)
    {
        tp = tp -> next;
    }
    tp -> next = temp;
    temp -> prev = tp;
    return head;
    
}

int main()
{
    struct node* head = NULL;
    struct node* ptr;
    head = add_To_Empty(head, 45);
    head = add_at_beg(head,34);
    head = add_at_end(head, 9);
    
    printf("The elements are: \n");
    ptr = head;
    while(ptr != NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return 0; 
}