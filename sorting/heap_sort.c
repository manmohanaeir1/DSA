#include<stdio.h>
#include<conio.h>
void swap(int * a, int * b)
{
    int tmp = *a;
    *a= *b;
    *b = tmp;
}

void heapify(int arr[], int n , int i){
    int larg = i;
    int left = 2*i +1;
    int right = 2*i +2;
    if(left< n && arr[left]> arr[right])
    {
        larg = left;

    }
    if(left< n && arr[right]> arr[larg])
    {
        larg = right;
        
    }
    if (larg != i)
    {
        swap(&arr[i], &arr[larg]);
        heapify(arr,n, larg);
    }
    
}
void heapsort(int arr[] , int n)
{
    for ( int i = n/2-1; i >= 0; i--)
    {
       heapify(arr, n, i);
    }
    for (int  i = n-1; i >=0; i--)
    {
        swap(&arr[0],&arr[i]);
        heapify(arr, i , 0);
    }
    
    
}

void print_sorted_array(int arr[], int n)
{
    for (int  i = 0; i <n; i++)
    {
        printf("%d",arr[i]);
        printf("\t");
    }
    
}

int main()
{
    int arr[] = {54,6,74,34,23,11,12,44,22};
    int n = sizeof(arr)/ sizeof(arr[0]);
    heapsort(arr,n);
    printf("Sorted array : \n");
    print_sorted_array(arr,n);
    
    return 0;

}
