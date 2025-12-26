#include<stdio.h>
int main(){
    int marks;
    printf("\nPlease enter your marks:");
    scanf("%d", &marks);

    if(marks > 90 ){
        printf("\nYou have got A Grade");
    }else if(marks > 75){
        printf("\nYou have got B Grade");
    }else if(marks > 60){
        printf("C Grade");
    }else if(marks > 30){
        printf("\nyou have got D Grade");
    }else{
        printf("\nyou have failed the exam with F Grade");
    }


    return 0;
}