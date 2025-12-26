#include<stdio.h>
#include<math.h>
int main(){
    float Principal, Time, Rate;
    printf("\nWelcome to Compount Interest calculator\n");

    printf("\nPlease enter Principal: ");
    scanf("%f", &Principal);

    printf("Please enter Time: ");
    scanf("%f", &Time);

    printf("Please enter Rate: ");
    scanf("%f", &Rate);

    float result = Principal * pow((1 + Rate / 100), Time);

    printf("The Compount Interest is: %.2f", result);

    return 0;
}