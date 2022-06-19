#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link; 
};

void count_of_nodes(struct node *head);

void add_at_pos(struct node *head, int data, int pos);

void del_at_pos(struct node **head, int possition);

void print_data(struct node *head);

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

    int add_num;
    printf("Number you want to add:\n");
    scanf("%d", &add_num);

    int possition;
    printf("Type the possition:\n");
    scanf("%d", &possition);

    add_at_pos(head, add_num, possition);
    struct node *ptr = head;
    print_data(head);

    int possition_del;
    printf("Type the possition to delete:\n");
    scanf("%d", &possition_del);
    del_at_pos(&head, possition_del);
    ptr = head;
    
    print_data(head);

    return 0;
}

void add_at_pos(struct node *head, int data, int pos){
    struct node *ptr = head;

    //creating new node 
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2 -> data = data; 
    ptr2 ->link = NULL;

    pos --; // 3;
    while (pos != 1)
    {
        ptr = ptr ->link;
        pos --;
    }
    ptr2 -> link = ptr ->link;
    ptr -> link = ptr2;
}

void del_at_pos(struct node **head, int possition){
    struct node *current = *head;
    struct node *previos = *head;
    if (*head == NULL)
    {
        printf("List is already empty\n");
    }
    else if(possition == 1){
        *head = current->link;
        free(current);
        current = NULL;
    }
    else {
        while(possition != 1){
            previos = current;
            current = current->link;
            possition --;
        }
        previos -> link = current->link ;
        free(current);
        current = NULL;
    }
}

void print_data(struct node *head){
    if (head == NULL)
    {
        printf("Linked list in empty");
    }
    struct node *ptr = NULL;
    ptr = head;
    printf("The nodes are: "); 
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link; // every ittereation will point the next link;
    }
}
    
