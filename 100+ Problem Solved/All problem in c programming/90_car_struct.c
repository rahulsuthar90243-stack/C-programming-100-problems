// car structure with fields for make, model, year, and color.
#include<stdio.h>

typedef struct Car{
    char make[20];
    char model[20];
    int year;
    char color[20];
}Car;

void print_car(Car *car);

int main(){

    Car ford = {.make = "Ford", .model = "Aspire", .year = 2016, .color = "White"};
    printf("\n\nWelcomw to our car World");


  print_car(&ford);


    return 0;
}

void print_car(Car *car){
    printf("\nThe %s model of car, Which is of %s color, was purchased in %d year, and is made by %s company",
          car->model, car->color, car->year, car->make);
}

// #include<stdio.h>

// struct Car{
//     char make[20];
//     char model[20];
//     int year;
//     char color[20];
// };

// typedef struct Car Car;
// int main(){


//     return 0;
// }