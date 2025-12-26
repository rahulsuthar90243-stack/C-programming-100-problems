#include<stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter number first number: ");
    scanf("%d", &num1);
    printf("Now Enter number second number: ");
    scanf("%d", &num2);
    printf("Now Enter number third number: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("%d is the greatest", num1);
    }else if(num2 > num1 && num2 > num3){
        printf("%d is the greatest", num2);
    }else{
        printf("%d is the greatest", num3);
    }

    return 0;
}