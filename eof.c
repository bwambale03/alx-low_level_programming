#include<stdio.h>
/**
 *main -usage of fscanf function
 *Usage - in its C is used for formatted input from a file
 *
 * Return: 0
 */
 int main(){
    FILE *file = fopen("text.txt", "r");
    int n1, n2;
    if(file == NULL){
        perror("Error opening file");
        return(-1);
    }
    int readFile = fscanf(file, "%d %d\n", &n1, &n2);
    if (readFile == 2){
        printf("the numbers are %d and %d were read succesfully\n", n1, n2);
    }else if(EOF == 0){
        printf("End of file reached\n");
    }else{
        printf("Error reading file\n");
    }
    fclose(file);
    return (0);

 }