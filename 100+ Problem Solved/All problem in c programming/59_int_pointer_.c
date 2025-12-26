#include<stdio.h>
int main(){
    int number;
    int *ptr = &number;
    printf("\n\nWelcome to showcasing Integer Pointers");
    printf("\nPlease, enter number: ");
    scanf("%d", ptr);
   
    printf("The Value of number is: %d\n", *ptr);
    printf("The Value of number is: %d\n", number);


    return 0;
}