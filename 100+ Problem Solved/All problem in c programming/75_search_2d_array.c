#include<stdio.h>

int element_input(int arr[][10], int row, int col);
int search(int arr[][10], int row, int col, int element);


int main(){
    printf("\n\nWelcome to searching in 2D array");
    int r, c, e;
    printf("\nPlease, enter row and column: ");
    scanf("%d %d", &r, &c);

    int arr[10][10];
    printf("\nPlease, enter element\n");
    element_input(arr, r, c);

    printf("\nPlease, enter element to search: ");
    scanf("%d", &e);

    int occ = search(arr, r, c, e);
    printf("\nSearching for Found %d occ", occ);


    return 0;
}
 
int element_input(int arr[][10], int row, int col){
    for(int i=0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}

int search(int arr[][10], int row, int col, int element){
    int occ = 0;
    for(int i=0; i < row; i++){
        for(int j=0; j < col; j++){
         if(arr[i][j] == element){
            occ++;
         }
        }
    }
    return occ;

}
