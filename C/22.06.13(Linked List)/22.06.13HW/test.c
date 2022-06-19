#include<stdio.h>
#include<stdlib.h>

typedef struct node {
  int value;
  struct node * next;
} ListNode;

int main()
{

int size = 0;
printf("Enter size:");
scanf("%d", &size);

ListNode *head = NULL;
ListNode *tail = NULL;

for (int count = 0; count < size; count++) {
    ListNode *temp = malloc(sizeof(*temp));

    temp->value = count;
    temp->next = NULL;

    if (tail == NULL) {
        head = temp;
        tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
}
}