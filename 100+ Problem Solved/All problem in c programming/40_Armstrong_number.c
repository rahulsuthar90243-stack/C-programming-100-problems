#include<stdio.h>
int main(){
    int num;
    printf("\n\nWelcome the Sum of Armstrong number");
    printf("\nPlease Enter the number: ");
    scanf("%d", &num);

   int sum = 0;
   int copy = num;

   while(copy > 0){
    int digit = copy % 10;
    sum += digit * digit * digit;
    copy /= 10;
   }

   if(sum == num){
    printf("The number %d is a Armstrong number", num);
   }else{
    printf("The number %d is Not a Armstrong number", num);
   }
    return 0;
}