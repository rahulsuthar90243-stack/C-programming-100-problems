#include<stdio.h>
int main(){
    int P, T, R;
    printf("\nWelcome to simple Interest calculator\n");

    printf("\nPlease enter Principal: ");
    scanf("%d", &P);

    printf("Please enter Time: ");
    scanf("%d", &T);

    printf("Please enter Rate: ");
    scanf("%d", &R);

    float interest = (P * T * R) / 100;

    printf("The Simple Interest is: %.2f", interest);

    return 0;
}