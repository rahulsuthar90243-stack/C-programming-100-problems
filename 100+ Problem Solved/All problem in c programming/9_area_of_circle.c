#include<stdio.h>
int main(){
    const float PI = 3.14159;
    int radius; 
    printf("\nPlease enter radius of circle: ");
    scanf("%d", &radius);
    printf("\nThe area of a you circle: %f", PI * radius * radius);

    return 0;
}