#include<stdio.h>
int main(){
    char str[50];
    printf("Welcome to Showing used of fgets and puts");
    printf("\nPlease, enter string: ");
    fgets(str, 20, stdin);

    printf("\nThe name your entered is: ");
    puts(str);

    return 0;
}