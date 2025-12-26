#include<stdio.h>
int main(){
    printf("\n\nWelcome to the File Opening Tool.");
    char filename[100];
    printf("\nPlease, enter the file name: ");
    scanf("%99s", filename);

    FILE *file = fopen(filename, "r");
    if(file != NULL){
        printf("%s was opened successfull", filename);
    }else{
        printf("File was not fount!!!");
    }
    return 0;
}