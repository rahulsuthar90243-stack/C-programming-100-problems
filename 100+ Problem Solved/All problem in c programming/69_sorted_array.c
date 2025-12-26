#include<stdio.h>

int sorted(int arr[], int size);

int main(){
    int arr1[5]= {1,2,3,4,5}; //increasion order
    int arr2[5]= {5,4,3,2,1}; // decreasion 
    int arr3[5]= {4,2,7,1,9};  // not sorted


    if(sorted(arr1,5)){
        printf("\nFirst array is sorted");
    }else{
        printf("\nFirst array is Not sorted");

    }

    if(sorted(arr2,5)){
        printf("\nSecond array is sorted");
    }else{
        printf("\nSecond array is Not sorted");

    }

    if(sorted(arr3,5)){
        printf("\nThird array is sorted");
    }else{
        printf("\nThird array is Not sorted");

    }


    return 0;
}

int sorted(int arr[], int size){

 int increasion = 1;
 int decreasion = 1;

 for(int i=0; i<size; i++){
    if(arr[i] > arr[i+1]){
        decreasion = 0;
    }else if (arr[i] < arr[i+1]){
        increasion = 0;
    }
 }

    return increasion || decreasion;
}



//// bobble sorted
// #include<stdio.h>

// int is_sorted(int arr[], int size);

// int main(){
//     int n;
//     printf("\nPlease, enter size of arr: ");
//     scanf("%d", &n);

//     int arr[n];

//     printf("\nEnter element: ");
//     for(int i=0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }

//     is_sorted(arr, n);

//     for(int i=0; i < n; i++){
//     printf("%d ", arr[i]);
//     }


//     return 0;
// }
// int is_sorted(int arr[], int size){

//     for(int i=0; i < size; i++){
//         for(int j=0; j < size; j++){
//             if(arr[j] > arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     return 0;
// }