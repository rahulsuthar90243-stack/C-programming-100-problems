#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("\n\nWelcome to the Dynamic Array.");
    float size;
    printf("\nPlease, enter size of element: ");
    scanf("%f", &size);

    float *arr = malloc(size * sizeof(float));
    if(arr == NULL){
        printf("\nMemory are not allocat.!!!");
        return 1;
    }

    for(int i = 0; i < size; i++){
        printf("New, enter element %d :", (i+1));
        scanf("%f", &arr[i]);
    }

    printf("\nHare are your element: ");
    for(int i=0 ; i < size; i++){
        printf(" %.2f", arr[i]);
    }

    free(arr);
    arr = NULL;
    return 0;
}


// #include<stdio.h>
// #include<stdlib.h>

// void print_arr(float arr[], float size){
//     printf("\nHare are your element: ");
//     for(int i=0 ; i < size; i++){
//         printf(" %.2f", arr[i]);
//     }
// }

// int main(){
//     printf("\n\nWelcome to the Dynamic Array.");
//     float size;
//     printf("\nPlease, enter size of element: ");
//     scanf("%f", &size);

//     float *arr = (float*)malloc(size * sizeof(float));
//     if(arr == NULL){
//         printf("\nMemory are not allocat.!!!");
//         return 1;
//     }

//     for(int i = 0; i < size; i++){
//         printf("New, enter element %d :", (i+1));
//         scanf("%f", &arr[i]);
//     }
//     print_arr(arr, size);


//     free(arr);
//     arr = NULL;
//     return 0;
// }