#include<stdio.h>
int sum(int arr[][3], int r, int c);
int main(){
   printf("\n\nWelcome to Sum and Averave in 2D Array");
   int arr[2][3] = {{1,2,3} , {4,5,6}};


   int addition = sum(arr, 2, 3);
   float ave =  addition / 6.0;
   printf("\nSum is %d and average is %.2f", addition, ave);

    return 0;
}
int sum(int arr[][3], int r, int c){
    int sum = 0;
    for(int i=0; i < r; i++){
        for(int j=0; j < c; j++){
         sum += arr[i][j];
        }
    }
    return sum;

}