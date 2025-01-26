#include <stdio.h>
#include <string.h>

int main(){

    //Declare the file pointer
    FILE* fptr;

    //Get the data to be written in file
    char dataToBeWritten[50] = "GeeksforGeeks - A Computer Science Portal for Geeks";


    //Open the existing file GFgTest.c using fopen()
   //In write mode using 'w' attribute
   fptr = fopen("GfgTest.c", "w");

   //check if this file pointer is null
   //which maybe if the file does not exist
   if(fptr == NULL){
    printf("GfgTest.c file failed to open.");
   }
   else{
    printf("The file is now opened.");

    //Write dataToBeWritten into the file
    if(strlen(dataToBeWritten) > 0){
        fprintf(fptr, dataToBeWritten);

        fputs(dataToBeWritten, fptr);

        fputc(dataToBeWritten, fptr);

    }
   }
}
