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

struct node* add_at_pos(struct node* head, int data, int position)
{
    struct node *newP = NULL; // about the new node
    struct node *temp = head; // pointing to the head first
    struct node *temp2 = NULL; // points to the next node where the temp has stopped
    newP = add_To_Empty(newP, data); // to create a new node

    while(position != 1)
    {
        temp = temp -> next;
        position --;
    }

    temp2 = temp -> next; // points to the next node where the temp has stopped
    temp -> next = newP;
    newP -> next = temp2;
    newP -> prev = temp;
    return head;
}

struct node* create_new_list(struct node* head)
{
    int n, data, i;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n == 0) return head;

    printf("Enter the elements for the first node 1: ");
    scanf("%d", &data);
    head = add_To_Empty(head, data);

    for (i = 1; i < n; i++)
    {
        printf("Enter the element for the node: %d: ", i+1);
        scanf("%d", &data);
        head = add_at_end(head, data);
    }
    return head;
}

struct node* del_first(struct node* head){
    struct node* temp = head;
    head = head->next;
    free(temp);
    temp = NULL;
    head -> prev = NULL;
    return head;
}

void print_func(struct node* head){
    struct node* ptr = head;
    while (ptr != NULL)
    {   
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}


int main()
{
    struct node* head = NULL;
    struct node* ptr;
    head = create_new_list(head);
    
    printf("The elements are: \n");
    print_func(head);

    head = del_first(head);
    printf("After del the first element: \n");
    print_func(head);
    
    return 0; 
}