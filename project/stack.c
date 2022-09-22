#include <stdio.h>
#include <stdlib.h>
int stack[100], ch, n, top, x, i;

void push();
void pop();
void diaplay();

int main()
{
    top = -1;
    printf("Enter the size of Stack[max=100] \n");
    scanf("%d", &n);
    printf("\nStack operation using array");
    printf("\n........................................\n");
    printf("\n\t 1.PUSH\n");
    printf("\n\t 2.POP\n");
    printf("\n\t 3.DISPLAY\n");
    printf("\n.........................................\n");

    do
    {
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;

        case 3:
            display();
            break;  

        default:    
            printf("\n Please enter valide choice");
            break;
        }
    } while (ch!=4);
    return 0;
    
}

void push()
{
    if (top>=n-1)
    {
        printf("Stack in full/ Overflow condition");
    }else{
        printf("Enter the value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top] = x;
    }
    
}

void pop()
{
    if (top<=-1)
    {
        printf("\n Stack is underflow condition");
    }else{
        printf("\n\t THe poped element is %d ", stack[top]);
        top--;
    }
    
}

void display()
{
    if(top>=0)
    {
        printf("\nThe elements in stack: \n");
        for (i =top; i >=0; i--)
        {
           printf("%d\t ",stack[i]);
           
        }
        printf("\nPress next choice\n");
        
    }
    else
        {
            printf("Stack is empty");
        }
}

