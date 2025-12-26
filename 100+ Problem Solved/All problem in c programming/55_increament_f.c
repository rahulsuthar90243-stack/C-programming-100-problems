#include<stdio.h>

int increament(int);

int main(){
 int number;
 printf("\n\nWelcome to Showing Call by Value");
 printf("\nPlease, enter number: ");
 scanf("%d", &number);

 printf("\nBefore: Value of number is: %d", number);
 increament(number);
 printf("\nAfter: Value of number is: %d", number);

return 0;
}

int increament(int a){
 printf("\nint function Before: Value of number is: %d", a);
 a--;
 printf("\nint function After: Value of number is: %d", a);
}
