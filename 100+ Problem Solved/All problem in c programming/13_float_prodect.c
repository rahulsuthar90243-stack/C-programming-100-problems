#include<stdio.h>
int main(){
    float first, second;
    printf("\nPlease enter first number: ");
    scanf("%f", &first);

    printf("\nPlease enter second number: ");
    scanf("%f", &second);

    float result = (first * second);

    printf("Product is %f", result);
    printf("\nProduct is %.2f", result);

    return 0;
}