#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("\n\nWelcome to the Dynamic Charater");
    char *sentense = (char*) calloc(100, sizeof(char));
    if(sentense == NULL){
     printf("Error:- memory not allocat.!!!");
     return 1;
    }

    printf("\nEnsuring all Element are initialized.");
    for(int i=0; i < 100; i++){
        printf(" %d", sentense[i]);
    }

    printf("\nNow, enter the piece of text: ");
    fgets(sentense, 100, stdin);

    printf("\nHare are the text: %s", sentense);
    free(sentense);
    sentense = NULL;
    return 0;
}