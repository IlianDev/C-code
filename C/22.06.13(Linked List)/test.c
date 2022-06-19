#include<stdio.h>

struct node {
    int data;
    struct node *next;
};

// add a node at the front;
void push(struct node** head_ref, int new_data){
    //1. allocate node*;
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    //2. put in data;
    new_node -> data = new_data;

    //3. make next of the new node as head;
    new_node -> next = head_ref;

    //4. make the head pointing to the new node;

}