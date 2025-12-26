#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("\nPlease enter first size: ");
    scanf("%d", &a);

    printf("\nPlease enter second size: ");
    scanf("%d", &b);

    printf("\nPlease enter third size: ");
    scanf("%d", &c);

    printf("\nPlease enter fourth size: ");
    scanf("%d", &d);

    int  perimeter = (a + b + c + d);

    printf("\nPerimeter of your shape is  %d", perimeter);

    return 0;
}