#include<stdio.h>
int main(){
    char day[10];
    char month[16];
    int year;

    printf("\n\nWelcome to formating date");
    printf("\nPlease, enter the current day: ");
    scanf("%s", day);
    printf("Please, enter the current month: ");
    scanf("%s", month);
    printf("Please, enter the current year: ");
    scanf("%d", &year);

    printf("\nThe current date is: %s/%s/%04d", day, month, year);
    return 0;
}