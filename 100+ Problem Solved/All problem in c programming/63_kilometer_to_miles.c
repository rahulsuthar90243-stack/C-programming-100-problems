#include<stdio.h>
int main(){

    const float Miles_Per_KMS = 0.621371;

    long KMS;
    printf("\n\nWelcome to Distance Converter");
    printf("\nPlease, enter the KSM; ");
    scanf("%ld", &KMS);

    long miles = KMS * Miles_Per_KMS;
    printf("The number of miles are %ld", miles);


    return 0;
}