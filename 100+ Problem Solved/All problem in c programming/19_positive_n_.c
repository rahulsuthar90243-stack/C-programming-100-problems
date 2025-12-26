#include<stdio.h>
int main(){
    int number;
    printf("Please enter your number: ");
    scanf("%d", &number);

    if(number > 0){
        printf("The number is Positive");
    }else if(number < 0){
        printf("The number is Nagative");
    }else{
        printf("The number is Zero");
    }
    return 0;
}