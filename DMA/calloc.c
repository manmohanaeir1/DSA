#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n, i, *pt, sum=0;
    printf("Enter number of elements:");
    scanf("%d", &n);
    pt = (int *) calloc(n, sizeof(int));
    if(pt == NULL)
    {
        printf("Memory not allocated");
        exit(0);
    }
    else
    {
        printf("Enter %d elements:", n);
        for(i=0; i<n; i++)
        {
            scanf("%d", pt + i);
            sum = sum + *(pt + i);
        }
        printf("Sum of elements is:%d", sum);
        free(pt);

    }
    return 0;
}
