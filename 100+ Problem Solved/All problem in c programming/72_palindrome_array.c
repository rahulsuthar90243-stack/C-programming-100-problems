#include<stdio.h>

int palindrome(int arr[], int size);

int main(){
    int arr[6] = {1,2,3,3,2,1};

    if(palindrome(arr, 6)){
        printf("It is the Palindrome");
    }else{
        printf("It is Not a Palindrome");
    }


    return 0;
}

int palindrome(int arr[], int size){
 
    for(int i=0; i < size / 2; i++){
        if(arr[i] != arr[size - 1 - i]){
         return 0;
        }
    }
    return 1;
}