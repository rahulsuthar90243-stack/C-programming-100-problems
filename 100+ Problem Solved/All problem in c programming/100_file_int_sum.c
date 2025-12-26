#include<stdio.h>
int main(){
    char filename[50] = "filename.exe";
    FILE *file = fopen(filename, "r");
    if(file == NULL){
        printf("\nMemory not fount");
        return 1;
    }

    int temp;
    int sum = 0;
    while(fscanf(file, "%d", &temp) == 1){
        sum += temp;
    }

    printf("The sum of all number is %d", sum);
    fclose(file);
    file = NULL;

    return 0;
}


