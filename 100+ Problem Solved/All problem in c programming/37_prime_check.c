#include<stdio.h>
int main(){
    int num;
    printf("\n\nWelcome to Prime Checker");
    printf("\nPlease enter the number: ");
    scanf("%D", &num);

    int i = 2;
    while (i < num){
    if(num % 2 == 0){
        printf("%d Not is prime number", num);
        return 0;
    }
    i++;
    }

   printf("%d is prime number", num);


    return 0;
}