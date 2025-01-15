#include <stdio.h>

void main(){
    //ask user to enter a temperature
    //output 1 if temp >70 and < 85
    //if not output 0
    //do not use if-else
    int temp; 
    printf("Enter a temperature: ");
    scanf("%d", &temp);
    printf("%d", temp > 70 && temp < 85);
}