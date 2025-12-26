#include<stdio.h>
int main(){
    int marks;
    printf("\nPlease enter your marks:");
    scanf("%d", &marks);

    // turnary Operator
    marks > 80 ? printf("High") : (marks >= 50 ? printf("Moderate") : printf("Low"));

    return 0;
}