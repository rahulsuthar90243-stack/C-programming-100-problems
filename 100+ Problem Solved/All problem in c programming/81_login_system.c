#include<stdio.h>
#include<string.h>
int main(){
    char STORE_PASSWORD[50] = "RSCoding";
    char passwrod[50];
    printf("\n\nWelcome to store system");
    printf("\nPlease, enter youe password: ");

    scanf("%s", passwrod);
    // fgets(passwrod, sizeof(passwrod), stdin);
    // getchar();

 
    if(strcmp(passwrod , STORE_PASSWORD) == 0){
        printf("Access Granted to the System");
    }else{
        printf("Access Denied to the System");

    }


    return 0;
}