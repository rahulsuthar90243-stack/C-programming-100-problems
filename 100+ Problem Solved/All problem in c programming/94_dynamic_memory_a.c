#include<stdio.h>
#include<stdlib.h>

typedef struct Car{
    char make[20];
    char model[20];
    int year;
    char color[20];
}Car;

void print_car(Car *car);

int main(){
    printf("\n\nWelcome to our Dynamic Island.");
    Car *my_car =(Car*) malloc(sizeof(Car));
    if(my_car == NULL){
        printf("\nMemory was not allocat.!!!");
        return 1;
    }

    printf("\nPlease, enter your car model: ");
    scanf("%s", my_car->model);

    printf("Now, enter your car company: ");
    scanf("%s", my_car->make);;

    printf("Now, enter your car color: ");
    scanf("%s", my_car->color);

    printf("Finally, enter your car year: ");
    scanf("%d", &my_car->year);

    printf("\nHare are the car details");
    print_car(my_car);

    free(my_car);

    return 0;
}

void print_car(Car *car){
    printf("\nThe %s model of car, Which is of %s color, was purchased in %d year, and is made by %s company",
          car->model, car->color, car->year, car->make);
}