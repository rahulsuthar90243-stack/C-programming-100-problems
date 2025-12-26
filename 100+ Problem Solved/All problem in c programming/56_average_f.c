#include<stdio.h>

float get_average(int,int,int,int, int);

int main(){
    int num1, num2, num3, num4, num5;
    printf("\n\nWelcome to Calculate Average Number");
    printf("\nPlease, enter the five number: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    float result =  get_average(num1, num2, num3, num4, num5);

    printf("The five number  Average is %.2f",result);


    return 0;
}

float get_average(int a,int b,int c,int d, int e){

float sum = a + b + c  + d + e;
return sum  / 5;

}
