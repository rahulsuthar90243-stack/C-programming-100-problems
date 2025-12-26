#include<stdio.h>
int squares(int);
int main(){
   int num;
   printf("\n\nWelcome to the World of Squares");
   printf("\nPlease, enter number: ");
   scanf("%d", &num);

   printf("The number of square %d is %d", num, squares(num));

    return 0;
}

int squares(int num){
    int square = num * num;
    return square;
}
