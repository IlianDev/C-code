#include<stdio.h>
#include<stdlib.h>

struct node{
    int number;
    struct node* next;
};

int main()
{
    struct node *head;
    struct node *current;
    struct node *preveios;


    head = malloc(sizeof(struct node));
    head->number = 0;
    head->next = NULL;

    current = head;
    

    for (int i = 0; i < 3; i ++){
        preveios = current;
        current = malloc(sizeof(struct node));
        current ->number = i + 1;
        current ->next = NULL;

        preveios -> next = current;
    }

    for (struct node *p=head; p!=NULL; p = p->next)
    {
        printf("%d\n", p->number);
    };
    
    // printf("%d", head->number); // 1;

    // free
    while (current)
    {
        tmp = current;
        current = tmp->next;
        free(tmp);
    }
}
