#include<stdio.h>

void deleting(int arr[], int size, int new_arr[], int *new_size, int element);
void print(int arr[], int size);
int main(){

    int arr[5] = {4, 5, 6, 2, 8};
    int new_arr[5];
    int new_size;

    deleting(arr, 5, new_arr, &new_size, 6);
    printf("\nThe Array after deleting element 6: ");
    print(new_arr, new_size);


    return 0;
}

void print(int arr[], int size){

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

}

void deleting(int arr[], int size, int new_arr[], int *new_size, int element){

    int j=0;
    for(int i=0;i < size; i++){
        if(arr[i] != element){
            new_arr[j++] = arr[i];
        }
    }
    *new_size = j;
  
}

