#include<stdio.h>

int occurences(int arr[], int size, int element);

int main(){

    int arr[] = {2, 3, 2, 5, 7, 5, 2, 7, 8, 9};
    printf("\n\nWelcome to finding element occurrences!");

    int result = occurences(arr, 10, 2);
    printf("\nThe Element 2 of occurrences is: %d", result);

     result = occurences(arr, 10, 7);
    printf("\nThe Element 7 of occurrences is: %d", result);

     result = occurences(arr, 10, 8);
    printf("\nThe Element 8 of occurrences is: %d", result);

     result = occurences(arr, 10, 5);
    printf("\nThe Element 5 of occurrences is: %d", result);




    return 0;
}

int occurences(int arr[], int size, int element){
    int count = 0;
    for(int i=0; i < size; i++){
        if(arr[i] == element){
         count++;
        }
    }
    return count;
}