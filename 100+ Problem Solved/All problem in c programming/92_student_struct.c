#include<stdio.h>

typedef struct Student{
    int id;
    char name[10];
    char year[20];
    char gpa;
}student;

void print_result(student *stu);
void increase(student *stu);
void dicrease(student *stu);


int main(){
   student stu1 = {.id = 101, .name = "Rahul", .year = "First", .gpa = 'A'};
      student stu2 = {.id = 102, .name = "Mahipal", .year = "First", .gpa = 'B'};
         student stu3 = {.id = 103, .name = "Nikhil", .year = "second", .gpa = 'F'};

    printf("\n\nWelcome to our Collage");
    printf("\nHare are the student details");
    print_result(&stu1);
    print_result(&stu2);
    print_result(&stu3);

    dicrease(&stu1);
    increase(&stu3);
    
    
    printf("\nAfter Change");
    print_result(&stu1);
    print_result(&stu2);
    print_result(&stu3);     

    return 0;
}
void print_result(student *stu){
    printf("\nThe student name is %s, has id %d, and student in %s year has achieved %c grade", stu->name, stu->id, stu->year, stu->gpa);
}

void increase(student *stu){
    stu->gpa--;
}
void dicrease(student *stu){
    stu->gpa++;
}