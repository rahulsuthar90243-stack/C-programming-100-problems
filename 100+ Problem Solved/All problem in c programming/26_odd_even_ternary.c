#include<stdio.h>
int main(){
    int number;
    printf("\nPlease enter number: ");
    scanf("%d", &number);


    (number % 2 == 0)?printf("number is even") : printf("number is odd");

    return 0;
}