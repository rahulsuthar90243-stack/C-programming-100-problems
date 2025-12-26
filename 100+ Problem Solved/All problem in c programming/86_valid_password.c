#include<stdio.h>
#include<string.h>

int main(){
    const char password[] = "Rahul@90";
    char valid[20];
    printf("\n\nWelcome to Valid Password Checker!");
  
    do
    {
      printf("\nPlease, enter Correct Password: ");
    //   scanf("%s", valid);
      fgets(valid, sizeof(valid), stdin);
      valid[strcspn(valid, "\n")] = '\0';

    } while (strcmp(password, valid) != 0);
    
    printf("\nYour Password is currect!!!");

    return 0;
}