#include <stdio.h>

void main(){
    //determine if user's entered number is negative, positive, or 0
    //determine if another entered number is odd or even
    int number1;
    int number2;
    printf("Part 1:\n");
    printf("Enter the first number: ");
    scanf("%d", &number1);

    if(number1 > 0){
        printf("Your number, %d, is Positive.\n", number1);
    }
    else if(number1 < 0){
        printf("Your number, %d, is Negative.\n", number1);
    }
    else{
        printf("Your number is 0.\n");
    }

    printf("Part 2:\n");
    printf("Enter the second number: ");
    scanf("%d", &number2);

    if(number2 % 2 == 0){
        printf("Your number, %d, is Even.", number2);
    }
    else{
        printf("Your number, %d, is Odd.", number2);
    }

}