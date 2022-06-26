/*
Направете свързан списък с информация за 5 човека - име и телефон.
Разпечатайте този списък
Напишете код, който проверява какъв е телефонът на човек с име Ivan
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    char name [25];
    char phone_number [10];
    struct node *next;
};

int main()
{
    struct node *head, *temp;
    head = malloc(sizeof(struct node));

    head->next = NULL;
    temp = head;

    for (int i = 0; i < 5; i++)
    {
        struct node* current = malloc(sizeof(struct node));

        printf("Enter name:");
        scanf("%s", &current->name);

        printf("Enter phone number: ");
        scanf("%s", &current->phone_number);

        current -> next = NULL;
        temp -> next = current;
        temp = temp -> next;
    }

    //print
    for ( struct node *p=head; p!=NULL; p = p->next)
    {
        printf("%s ", p->name);
        
        printf("%s ", p->phone_number);
    }

    // Напишете код, който проверява какъв е телефонът на човек с име Ivan

    for (struct node *p=head; p!=NULL; p = p->next)
    {
        if(strcmp(p->name,"Ivan") == 0){
            printf("Phone number of Ivan is: %s\n", p->phone_number);
        }
    }
    
    return 0;
}