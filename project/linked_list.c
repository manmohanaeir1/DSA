#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *s = NULL;

int main()
{
    int ch;
    while (1)
    {
        printf("\n .....Welcome to linked list project.....");
        printf("\n 1.Create \n");
        printf("\n 2.Display \n");
        printf("\n 3.Insert node at te beginning \n");
        printf("\n 4. Insert node at the end\n");
        printf("\n 5.Insert node at specific position \n");
        printf("\n 6. Search a node data\n");
        printf("\n 7. Sort the given data\n");
        printf("\n 8. Delete the node from beginning\n");
        printf("\n 9. Delete node from the end\n");
        printf("\n10. Delete node from the specific position \n");
        printf("\n11. Exit \n");

        printf("\n..............................\n");
        printf("Enter your choice: \t");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert_begin();
            break;
        case 4:
            insert_end();
            break;
        case 5:
            insert_pos();
            break;
        case 6:
            search();
            break;
        case 7:
            sort();
            break;
        case 8:
            delete_begin();
            break;
        case 9:
            delete_end();
            break;
        case 10:
            delete_pos();
            break;

        case 11:
            exit(0);
            break;

        default:
            break;
        }
    }
}

void create()
{
    struct node *p, *s1;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data :");
    scanf("%d", &p->data);
    p->next = NULL;
    if (s == NULL)
    {
        s = p;
    }
    else
    {
        s1 = s;
        while (s1->next != NULL)
        {
            s1 = s1->next;
        }
        s1->next = p;
    }
}

void display()
{
    struct node *s1;
    if (s == NULL)
    {
        printf("\n Linked List is empty \n");
        return;
    }
    else
    {
        s1 = s;
        printf("\n Elements in linked list are:\n");
        while (s1 != NULL)
        {
            printf("%d \t", s1->data);
            s1 = s1->next;
        }
    }
}

void insert_begin()
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data");
    scanf("%d", &p->data);
    p->next = NULL;
    if (s == NULL)
    {
        s = p;
    }
    else
    {
        p->next = s;
        s = p;
    }
}

void insert_end()
{
    struct node *p, *s1;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter the data");
    scanf("%d", &p->data);
    p->next = NULL;
    if (s == NULL)
    {
        s = p;
    }
    else
    {
        s1 = s;
        while (s1->next != NULL)
        {
            s1 = s1->next;
        }
        s1->next = p;
    }
}
void insert_pos()
{
    struct node *s1, *p;
    int i, pos;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the psitoin want to insert data");
    scanf("%d", &pos);
    printf("\nEnter the data:");
    scanf("%d", &p->data);
    p->next = NULL;
    if (pos == 0)
    {
        p->next;
        s = p;
    }
    else
    {
        s1 = 1;
        for (i = 0; i < pos; i++)
        {
            s1 = s1->next;
        }
    }
    p->next = s1->next;
    s1->next = p;
}

void search()
{
    int data;
    struct node *s1;
    printf("\n Enter the data which you want to search ");
    scanf("%d", &data);
    s1 = s;
    while (s1 != NULL)
    {
        if (s1->data == data)
        {
            printf("\n The data %d is found", data);
            break;
        }
        else
        {
            s1 = s1->next;
        }
    }
}

void sort()
{
    struct node *s1, *s2 = NULL;
    int tmp;

    if (s == NULL)
    {
        printf("List is empty");
    }
    else
    {
        s1 = s;
        while (s1 != NULL)
        {
            s2 = s1->next;
        }
        while (s2 != NULL)
        {
            if (s1->data > s2->data)
            {
                tmp = s1->data;
                s1->data = s2->data;
                s2->data = tmp;
            }
            s2 = s2->next;
        }
        printf("After sorting the elements are: ");
        while (s != NULL)
        {
            printf("%d \t", s->data);
            s = s->next;
        }
    }
}

void delete_begin()
{
    struct node *s1;
    if (s == NULL)
    {
        printf("\n Linked LIst is empty!");
        exit(0);
    }
    else
    {
        s1 = s;
        s = s->next;
        printf("\n the deleted element is: %d\t ", s1->data);
        free(s1);
    }
}

void delete_end()
{
    struct node *s1, *tmp;
    if (s == NULL)
    {
        printf("\n The linked list is empty!");
        exit(0);
    }
    else if (s->next == NULL)
    {
        s1 = s;
        s1 = NULL;
        printf("\n The deleted element is :  %d\t", s1->data);
        free(s1);
    }
    else
    {
        s1 = s;
        while (s1->next != NULL)
        {
            tmp = s1;
            s1 = s1->next;
        }
        tmp->next = NULL;
        printf("\n The deleted element is : %d\t", s1->data);
        free(s1);
    }
}

void delete_pos()
{
    int i, pos;
    struct node *s1, *tmp;
    if (s == NULL)
    {
        printf("\n The linked list is empty!!");
        exit(0);
    }
    else
    {
        printf("\n Enter the position os the node to be deleted");
        scanf("%d", &pos);
        if (pos == 0)
        {
            s1 = s;
            s = s->next;
            printf("\n The deleted element is:%d \t ", s1->data);
            free(s1);
        }
        else
        {
            s1 = s;
            for (i = 0; i < pos; i++ && s1->next != NULL)
            {
                tmp = s1;
                s1 = s1->next;
            }
        }
        tmp->next = s1->next;
        printf("\n The deleted element is %d \t", s1->data);
        free(s1);
    }
}


