#include<stdio.h>
#include<stdlib.h>

typedef struct Point{
    int x;
    int y;
}Point;

void input_point(Point *point);
void show_point(Point *point);

int main(){
   Point *start = (Point*) malloc(sizeof(Point));
   Point *end = (Point*) malloc(sizeof(Point));
   if(start == NULL || end == NULL){
    printf("Memory Error");
    return 1;
   }

   printf("\nPlease, enter the details for staring point of  your line: ");
   input_point(start);
   printf("\nNow, enter the details for ending point of your line: ");
   input_point(end);


   printf("\nNow, hare are the details: ");
   show_point(start);
   show_point(end);


    return 0;
}
void input_point(Point *point){
    printf("\nEnter X Coordinate: ");
    scanf("%d", &point->x);
    printf("Enter Y Coordinate: ");
    scanf("%d", &point->y);
}

void show_point(Point *point){
    printf("\nCoordinates (%d),(%d)",point->x, point->y );
}
