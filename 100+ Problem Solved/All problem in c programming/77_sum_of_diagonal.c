#include<stdio.h>
const int size = 3;
void print_diagonal_sum(int arr[][size]);

int main(){
    printf("\n\nWelcome to sum of diagonals in 2D Array");
   int arr1[3][3] = {{1,2,3} , {4,5,6}, {7,4,2}};
   int arr2[4][4] = {{8,7,1} , {3,5,7}, {7,1,3}, {7,9,5}};

   print_diagonal_sum(arr1);

    return 0;
}
void print_diagonal_sum(int arr[][size]){
    int sum_left_diagonal = 0;
    int sum_right_diagonal = 0;
    for(int i=0 ; i < size; i++){
    sum_left_diagonal += arr[i][i];
    sum_right_diagonal+= arr[i][size - 1 - i];
    }
    printf("\nThe sum odf left diagonal is %d", sum_left_diagonal);
    printf("\nThe sum odf right diagonal is %d", sum_right_diagonal);

   int Total_diagonal = sum_left_diagonal + sum_right_diagonal;
   if(size % 2 == 1){
    int index = size / 2;
    Total_diagonal -= arr[index][index];
   }
    printf("\nThe sum odf Total diagonal is %d", Total_diagonal);

}