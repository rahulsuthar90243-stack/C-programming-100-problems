#include<stdio.h>
int main(){
    int age;
    printf("\nPlease enter your age:");
    scanf("%d", &age);

   if (age < 13){
    printf("You are a chid");
   }else if(age < 20){
    printf("You are a teen");
   }else if(age < 60){
    printf("You are a adult");
   }else{
    printf("You are a senior");
   }

    return 0;
}