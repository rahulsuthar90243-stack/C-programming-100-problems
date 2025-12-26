#include<stdio.h>
int main(){
    float f;
    printf("\nWelcome to Temperature Converter\n");

    printf("\nPlease enter temp in F: ");
    scanf("%f", &f);

    float  C = (f - 32) * 5/9;

    printf("Tempereture in celsius: %.2f", C);

    return 0;
}