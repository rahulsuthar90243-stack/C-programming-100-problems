#include<stdio.h>
int main(){

    long long factorial(int);

    int number; 
    printf("\n\nWelcoeme to Factorial using long");
    printf("\nPlease, enter number: ");
    scanf("%d", &number);

    long long result = factorial(number);


    printf("The Factorial of %d is %lld", number, result);




    return 0;
}

 long long factorial(int num){

if(num  <= 1){
    return 1;
}

return num * factorial(num - 1);


 }
