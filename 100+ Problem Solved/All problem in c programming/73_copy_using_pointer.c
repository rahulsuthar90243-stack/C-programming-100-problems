#include<stdio.h>

void copy_array(char *arr, int size, char *new_arry);
void print(char arr[], int size);

int main(){
    char arr[9] = {'R','S',' ','C','O','D','I','N','G'};
    char new_arr[9];

    printf("\n\nWelcome to copying array using pointer arithmetic");
    printf("\nOriginal array: ");
    print(arr, 8);
    copy_array(arr, 8, new_arr);
    printf("\nCoped Char array: ");
    print(new_arr, 8);



    return 0;
}

void copy_array(char *arr, int size, char *new_arry){
    for(int i=0; i < size; i++){
        *(new_arry + i) = *(arr + i);
    }

}

void print(char arr[], int size){
    for(int i=0; i < size ; i++){
        printf("%c", arr[i]);
    }
}
