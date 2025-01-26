#include <stdio.h>
#include <string.h>

int main(){
    //Declare file pointer
    FILE* fptr;

    char dataToBeRead[50];

    fptr = fopen("GfgTest.c", "r");

    if(fptr == NULL){
        printf("GfgTest.c file failed to open.");
    }
    else{
        printf("The file is now opened.\n");

        fgets(dataToBeRead, 50, fptr);

        printf("%s\n", dataToBeRead);
    }

    fclose(fptr);
}
