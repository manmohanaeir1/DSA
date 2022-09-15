#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linked_list_traverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf(" Elements :%d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));

    third = (struct Node *)malloc(sizeof(struct Node));
    forth = (struct Node *)malloc(sizeof(struct Node));

    // link first and second
    head->data = 9;
    head->next = second;

    // link second and third
    second->data = 23;
    second->next = third;

    // link third  and forth
    third->data = 54;
    third->next = forth;

    // terminate
    forth->data = 93;
    forth->next = NULL;

    linked_list_traverse(head);

    return 0;
}
