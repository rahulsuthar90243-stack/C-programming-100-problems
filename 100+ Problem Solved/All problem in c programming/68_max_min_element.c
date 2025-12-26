#include<stdio.h>
#include<limits.h>

void min_max(int arr[], int *min, int *max, int size);

int main(){
    int n;
    int MAX = INT_MIN;
    int MIN = INT_MAX;
    printf("\nPlease, enter size of arr: ");
    scanf("%d", &n);
    int arr[n];
   
    printf("\nEnter element: ");
    for(int i=0; i<n; i++){
     scanf("%d", &arr[i]);
    }

     min_max(arr, &MIN, &MAX, n);

   
    printf("\nThe Maximum element is: %d\n", MAX);
    printf("The Minimum element is: %d\n", MIN);
    return 0;
}

void min_max(int arr[], int *min, int *max, int size){

    for(int i=0; i<size; i++){
        if(*max < arr[i]){
         *max = arr[i];
        }
        if(*min > arr[i]){
         *min = arr[i];
        }
    
    }

}







// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int n;
//     int MAX = INT_MIN;
//     int MIN = INT_MAX;
//     printf("\nPlease, enter size of arr: ");
//     scanf("%d", &n);
//     int arr[n];
   
//     printf("\nEnter element: ");
//     for(int i=0; i<n; i++){
//      scanf("%d", &arr[i]);
//     }

//     for(int i=0; i<n; i++){
//         if(MAX < arr[i]){
//             MAX = arr[i];
//         }
//         if(MIN > arr[i]){
//             MIN = arr[i];
//         }
//     }
    
//     printf("\nelement of arr is: ");
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\nThe Maximum element is: %d\n", MAX);
//     printf("The Minimum element is: %d\n", MIN);
//     return 0;
// }