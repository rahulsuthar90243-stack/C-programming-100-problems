#include<stdio.h>

void reverse(int arr[], int size);
void print(int arr[], int size);
void swap(int *first, int *second);
void element(int arr[], int size);

int main(){
    int n;
    printf("\n\nWelcome to Reversing Array");
    printf("\nPlease, enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Please, enter element of array: ");
    element(arr,n);
    
    printf("\nReverse this array: ");
    print(arr, n);
    reverse(arr, n);
    printf("\nAfter Reversing: ");
    print(arr, n);



    return 0;
}

void reverse(int arr[], int size){

    for(int i=0; i < size / 2; i++){
        swap(&arr[i], &arr[size - 1 - i]);
    }
}

void swap(int *first, int *second){
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}


void element(int arr[], int size){
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
}

void print(int arr[], int size){
    for(int i=0; i < size; i++){
     printf("%d ", arr[i]);
    }
}