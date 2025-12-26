#include<stdio.h>

int sum(int arr[], int size);

int main(){
    int arr[5];

    printf("\n\nWelcome to Sum and Average of Array!");

    printf("\nPlease, enter element of array: ");
    for(int i=0; i < 5; i++){
        scanf("%d", &arr[i]);
    }

    int addition = sum(arr, 5);
    float average = addition / 5.0;
    printf("\nThe sum of Element is: %d\n", addition);
    printf("The average of sum is: %.1f", average);


    return 0;
}

int sum(int arr[], int size){
    int addition = 0;
    for(int i=0; i < size; i++){
      addition += arr[i] ;
    }
    return addition;
}