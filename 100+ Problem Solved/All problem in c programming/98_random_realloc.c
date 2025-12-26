#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    printf("\n\nWelcome to the World of the dymanic realloc.");
    int *arr = (int*) calloc(10, sizeof(int));
    if(arr == NULL){
        printf("\nMemory Error!!!");
        return 1;
    }

    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        arr[i] = rand() % 100;  // readom number 
    }

    printf("\nHare are the random number: ");
    for(int i = 0; i < 10; i++){
        printf(" %d", arr[i]);
    }

    int *shrinked = (int*) realloc(arr,5 * sizeof(int));
    if(shrinked == NULL){
        printf("\nMemory Error!!!");
        arr = NULL;
        return 1;
    }

    arr = shrinked;

    printf("\nHare are the random number: ");
    for(int i = 0; i < 5; i++){
        printf(" %d", arr[i]);
    }

    free(arr);
    arr = NULL;
    return 0;
}