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

    // add new node to the list at the end
    struct node *current;
    current = malloc(sizeof(struct node));

    current ->number = 2;
    current ->next = NULL;
    head -> next = current;

    for (struct node *p=head; p!=NULL; p = p->next)
    {
        printf("%d\n", p->number);
    };
    
    // printf("%d", head->number); // 1;
}
