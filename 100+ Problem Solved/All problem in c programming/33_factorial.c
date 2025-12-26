#include<stdio.h>
int main(){
    int num;
    printf("\nWelcome to the World of Factorial");
    printf("\nPlease Enter the number: ");
    scanf("%d", &num);

    int i = 1;
    int fact = 1;
    while(i <= num){
        fact *= i;
        i++;
    }

    printf("The factorial of %d id %d", num, fact);
    return 0;
}