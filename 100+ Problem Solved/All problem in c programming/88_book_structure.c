

#include<stdio.h>
#include<string.h>

typedef struct Book{
   char title[50];
   char author[50];
   float price;
} Book;


void intput_book(Book *book);
void print_book(Book *book);

int main(){
    printf("Welcome to the book store");
    Book book[3];

    for(int i=0; i < 3; i++){
     intput_book(&book[i]);
    }

    printf("\n\nHare are the details of all the book's");
    for(int i=0; i < 3; i++){
     print_book(&book[i]);
    }


    return 0;
}

void intput_book(Book *book){

    printf("\nPlease, enter the book title: ");
    fgets(book->title, 50, stdin);
    book->title[strcspn(book->title, "\n")] = 0;

    printf("Now, enter the book's author: ");
    fgets(book->author, 50, stdin);
    book->author[strcspn(book->author, "\n")] = 0;

    printf("Finally, enter the book's price: ");
    scanf("%f", &(book->price));
    getchar();
}

void print_book(Book *book){
   printf("\n%s is written by %s, and is sold for Rs %.2f\n", book->title,book->author, book->price);
}





// #include<stdio.h>
// #include<string.h>

// void intput_book(char title[], char author[], float *price);
// void print_book(char title[], char author[], float price);

// int main(){
//     printf("Welcome to the book store");
//     char title[3][50];
//     char author[3][50];
//     float price[3];

//     for(int i=0; i < 3; i++){
//      intput_book(title[i], author[i], &price[i]);
//     }

//     printf("\n\nHare are the details of all the book's");
//     for(int i=0; i < 3; i++){
//      print_book(title[i], author[i], price[i]);
//     }


//     return 0;
// }

// void intput_book(char title[], char author[], float *price){

//     printf("\nPlease, enter the book title: ");
//     fgets(title, 50, stdin);
//     title[strcspn(title, "\n")] = 0;

//     printf("Now, enter the book's author: ");
//     fgets(author, 50, stdin);
//     author[strcspn(author, "\n")] = 0;

//     printf("Finally, enter the book's price: ");
//     scanf("%f", price);
//     getchar();
// }

// void print_book(char title[], char author[], float price){
//    printf("\n%s is written by %s, and is sold for Rs %.2f\n", title,author, price);
// }


// #include<stdio.h>

// typedef struct Book{
//     char title[50];
//     char author[50];
//     float price;
// }Book;

// int main(){
//     printf("\n\nWelcome to the book store");
//     Book book[2];

//     for(int i = =; i < 1; i++){
//         printf("\nPlease enter the book title: ");
//         fgets(book->title[i], sizeof(book->title), stdin);
//         book->title[strcspn(book->title, "\n")] = 0;

//         printf("\nPlease enter the book title: ");
//         fgets(book->title[i], sizeof(book->title), stdin);
//         book->title[strcspn(book->title, "\n")] = 0;
//     }




//     return 0;
// }

