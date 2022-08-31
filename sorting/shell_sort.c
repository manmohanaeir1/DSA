#include<stdio.h>
int print(int a[], int s);
int shell_sort( int a[], int s);
 
 int main (){
    int array[] = {23,29,15,19,31,7,9,5,2};
    int size= sizeof(array)/sizeof(array[0]);
    shell_sort(array, size);
    printf("The sorted array is : \n" );
    print(array, size);
    return 0;

 }

 int print( int a[], int s){
    int i;
    for(i = 0; i<s; i++){
        printf("%d   \t", a[i]);
    }
 }

 int shell_sort(int a[], int s){
    int gap , i ;
    for(gap= s/2; gap>0; gap /= 2){
        for(i=gap; i<s;i++){
            int tmp= a[i];
            int j;
            for(j=i; j>=gap && a[j-gap]>tmp; j = j-gap){
                a[i]= a[j-gap];

            }
            a[j] = tmp;
        }

    }
 }