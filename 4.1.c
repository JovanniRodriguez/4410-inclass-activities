#include <stdio.h>;

void main(){
    /*creata a file named hello.txt
    write
    Hello,
    how are you?
    my name is...
    what's your name?*/

    FILE *fptr;

    fptr = fopen("hello.txt", "w"); 
    fprintf(fptr, "Hello, ");
    fprintf(fptr, "How are you? ");
    fprintf(fptr, "My name is Jovanni. ");
    fprintf(fptr, "What's your name?");

    fclose(fptr);

}
