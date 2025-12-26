#include<stdio.h>
int main(){
    int number;
    printf("\nPlease enter number: ");
    scanf("%d", &number);

    float floating = number;
    printf("\nOriginal number is: %d", number);
    printf("\nConvert floating number is: %f", floating);
    printf("\nConvert floating number is: %f", (float)number);
    return 0;
}