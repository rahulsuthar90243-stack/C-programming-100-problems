#include<stdio.h>
int main(){
    int row;
    printf("\n\nWelcome the the Patterns Print");
    printf("\nPlease, enter the no of row: ");
    scanf("%d", &row);

    printf("Here is the Right Half Pyramid\n");
    for(int i = 0; i <= row; i++){
           printf("\n");
        for(int j = 0; j < i; j++){
            printf("* ");
        }
     
    }

    printf("\nHere is the Reverse Right Half Pyramid\n");
    for(int i= 0; i <= row; i++){
          printf("\n");
        for(int j=0 ; j < row - i; j++){
            printf("* ");
        }
      
    }

    printf("\nHere is the Left half payramid");
    for(int i=0; i <= row; i++){
        printf("\n");
        for(int j=0 ; j < row - i; j++){
          printf("  ");
        }
        for(int k = 0; k < i; k++){
          printf("* ");
        }
    }



    return 0;
}