#include<stdio.h>

typedef struct Book{
    char title[50];
    char author[50];
    float price[50];
}Book;

void print_book(Book *book){
    printf("\n%s is written by %s, and is sold for Rs %.2f\n", book->title,book->author, book->price);
}

int main(){
    printf("\n\nWelcome to the book store");
    Book book[3] = {{.title = "You can win", .author = "Shiv Khera", .price = 499.99},
    {.title = "Doglapan", .author = "Asheneev Grover", .price = 599.99},
    {.title = "Money save", .author = "Rahul", .price = 999.99}};


    printf("\nHare are the details of all the books");
    for(int i = 0; i < 3; i++){
        print_book(&book[i]);
    }


    return 0; 
} 