#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<malloc.h>
struct node 
    {
    int info;
    struct node *next;
    };

    typedef struct node NodeType;
    NodeType  *first, *last;

    first = NULL ;
    last= NULL;
    void insert_atfirst(int);
    void display();



int main(){
    int choice;
    int item;
    do
    {
   printf("Menue\n");
   printf("\n 1. insertaiton first\n");
   printf("\n 2. desplay");

   printf("\n Enter your choice");
   scanf("%d", choice);

   switch (choice)
   {
    case 1:
        printf("Enter item to be inserted");
        scanf("%d", &item);
        insert_atfirst(item);
        break;

    case 2:
    display();
    break;

    case 3:
    exit(1);

    default:
    printf("INvallied choice");
   }
  
    } while (choice<3);

    return 0; 

}


void insert_atfirst(int item){
    NodeType *NewNode;
    NewNode = (NodeType *) malloc(sizeof(NodeType));
    if (first==NULL)
    {
        NewNode->next = NULL;
        first = NewNode;
        last=NewNode;
    }
    else
    {
        NewNode->next =first;
        first= NewNode;
    }
    

}


void display(){
    NodeType *tmp;
    tmp = first;
    if (first==NULL)
    {
        printf("Empty linked list");
        exit(1);

    }else{
        while (tmp!=NULL)
        {
            printf("%d \t", tmp->info);
            tmp = tmp->next;
            
        }
        
    }
    
}