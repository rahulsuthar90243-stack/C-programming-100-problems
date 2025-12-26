#include<stdio.h>
int main(){
    int b, h;
    printf("\nWelcome to Area of triangle calculator");

    printf("\nPlease enter height size: ");
    scanf("%d", &h);

    printf("\nPlease enter breadth size: ");
    scanf("%d", &b);

    float triangle = 0.5*(b*h);

    printf("\nArea of triangle: %.2f", triangle);

    return 0;
}