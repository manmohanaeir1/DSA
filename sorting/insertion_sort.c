#include<stdio.h>
#include<conio.h>
int main ()
{
    int arr[50], num, i, j, pos, tmp;
    printf("Enter number of elements :");
    scanf("%d", &num);
    printf("Enter the elements:");
    for(i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i= 0; i<num; i++)
    {
        tmp= arr[i];
        j =  i;
        while(j>0 && tmp<arr[j-1])
        {
            arr[i] = arr[j-1];
            j = j-1;
        }

        arr[j] = tmp;

    }

    printf("The assending array is : \n");
    for(i = 0; i<num; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}