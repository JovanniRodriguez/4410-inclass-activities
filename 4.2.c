#include <stdio.h>;

void main(){
    FILE *fptr;

    fptr = fopen("hello.txt", "r");

    char myString[100];

    if(fptr != NULL){
        fgets(myString, 100, fptr);

        printf("%s\n", myString);
    }
    else{
        printf("File does not exist");
    }
}
