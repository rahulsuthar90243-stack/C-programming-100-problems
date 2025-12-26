#include<stdio.h>
int main(){
    const float PI = 3.14159;
    int radius; 
    printf("\nPlease enter circumference of circle: ");
    scanf("%d", &radius);
    printf("\nThe circumference of a you circle: %f", 2 * PI * radius);

    return 0;
}