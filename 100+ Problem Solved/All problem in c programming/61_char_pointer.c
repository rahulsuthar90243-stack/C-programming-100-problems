#include<stdio.h>
int main(){
    char charater;
    char *ptr = &charater;
    printf("\n\nWelcome to showcasing Charecter Pointers");
    printf("\nPlease, enter character: ");
    scanf("%c", ptr);
   
    printf("The Value of number is: %c\n", *ptr);
    printf("The Value of number is: %c\n", charater);


    return 0;
}