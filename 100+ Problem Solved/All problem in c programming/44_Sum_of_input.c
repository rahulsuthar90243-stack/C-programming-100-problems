#include<stdio.h>
int main(){
    int num, sum = 0;
     printf("Welcome to Number Adder.\n");

    do{
      printf("Please, enter your number: ");
      scanf("%d", &num);
      sum += num;

    } while (num != 0);

    printf("\nThe Sum of all your number is  %d", sum);
    

    return 0;
}