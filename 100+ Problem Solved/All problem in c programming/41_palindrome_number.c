#include<stdio.h>
int main(){
    int num;
    printf("\n\nWelcome to the Palindrome Pumber");
    printf("Please, enter number: ");
    scanf("%d", &num);

    int reverse = 0;
    int copy = num;
    while(copy > 0){
        reverse = (reverse * 10) + (copy % 10);
        copy /= 10;
    }

    if(reverse == num){
     printf("The number %d ia a palindrome", num);
    }else{
     printf("The number %d ia Not  palindrome", num);
    }

    return 0;
}