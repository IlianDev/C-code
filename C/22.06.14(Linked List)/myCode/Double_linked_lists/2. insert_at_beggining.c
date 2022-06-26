/*
|prev|45|next|  |prev|55|next|  
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



int main()
{
    struct node* head = malloc(sizeof(struct node));
    head -> prev = NULL;
    head -> data = 45;
    head -> next = NULL;
}