#include<stdio.h>
int main(){
    int num;
     printf("Welcome to Ziddi Number Checker.\n");

    do{
      printf("Please, enter a positive number: ");
      scanf("%d", &num);
    } while (num <= 0);

    printf("\nYou have sucessfully entered Positive number");
    

    return 0;
}