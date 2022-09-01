#include<stdio.h>
#include<conio.h>

void swap(int * xp, int * yp)
{
    int tmp = * xp;
    *xp = *yp;
    *yp = tmp;
}

void bubble_sort(int arr[], int n)
{
    int i , j ;
    for(i = 0; i<n-1; i++)
    {
        for(j = 0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);

            }
        }
    }
}

void print_array(int arr[], int size)
{
    int i= 0 ;
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
        printf(" \t");
    }
}

int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90};
    int n= sizeof(arr)/sizeof(arr[1]);
    bubble_sort(arr, n); // call function 
    printf("sorted array:");
    print_array(arr, n);
    return 0;
}