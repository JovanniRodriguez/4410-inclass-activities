#include <stdio.h>
#include <stdlib.h>

void main(){
    //take input of students
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    //make array of size numStudents
    int scores[numStudents];

    for (int i = 0; i < numStudents; i++){
        printf("Enter score for student %d: ", i);
        scanf("%d", &scores[i]);
    }

    //create scores.txt file
    FILE *fptr;

    fptr = fopen("scores.txt", "w");

    //write to it each score, one per line
    for (int i = numStudents-1; i >= 0; i--){
        fprintf(fptr, "%d\n", scores[i]);
    }
    
    //close file
    fclose(fptr);

    //free memory 
    
}
