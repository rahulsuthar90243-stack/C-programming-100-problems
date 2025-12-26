#include<stdio.h>

typedef struct Book{
    char title[50];
    char author[50];
    float price;
}Book;

typedef struct Student{
    int id;
    char name[10];
    char year[20];
    char gpa;
    int no_of_book;
    Book borrowed_book[3];
}student;

void print_result(student *stu);
void print_book(Book *book);

int main(){
    student stu1 = {.id = 101, .name = "Rahul", .year = "First", .gpa = 'A', .no_of_book = 2, .borrowed_book = {
    {.title = "You can win", .author = "Shiv Khera", .price = 499.99},
    {.title = "Doglapan", .author = "Asheneev Grover", .price = 599.99} }
   };
    
    printf("\n\nWelcome to our Collage");
    printf("\nHare are the student details");
    print_result(&stu1);
 
    return 0;
}
void print_result(student *stu){
    printf("\nThe student name is %s, has id %d, and student in %s year has achieved %c grade", stu->name, stu->id, stu->year, stu->gpa);

    printf("\n\nHare are the details of all the book's");
    for(int i = 0; i < stu->no_of_book; i++){
        print_book(&(stu->borrowed_book[i]));
    }
}
void print_book(Book *book){
     printf("\n%s is written by %s, and is sold for Rs %.2f\n", book->title,book->author, book->price);
}
