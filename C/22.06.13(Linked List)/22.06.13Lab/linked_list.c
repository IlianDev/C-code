#include<stdio.h>
#include<stdlib.h>

struct node{
    int number;
    struct node* next;
};

int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    head->number = 1;
    head->next = NULL;

}
