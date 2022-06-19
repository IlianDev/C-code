#include<stdio.h>
#include<stdlib.h>
#include <string.h>


struct node{
    char name;
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *current;
    struct node *prev;

    head = malloc(sizeof(struct node));
    // head -> phone = 454678;
    // strcpy(head->name, "Ivan");
    head -> next = NULL;
    current = head;

    for (int i = 0; i < 5; i++)
    {
        prev = current;
        current = malloc(sizeof(struct node));

        int temp_phone = 0;
        printf("phone number:");
        scanf("%d", &temp_phone);
        current->data = temp_phone;

        printf("Name: ");
        scanf("%s", &current->name);

        current->next = NULL;
        prev->next = current;
    }

    for (struct node *p=head; p!=NULL; p = p->next)
    {
        if(strcmp(p->name,"Ivan") == 0){
            printf("Phone number of Ivan is: %s\n", p->data);
        }
    }
    return 0;
    
}