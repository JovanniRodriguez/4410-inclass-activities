#include <stdio.h>

void main(){
    /* While Loop exercise
       countdown from 10 to 1, happy new year after 1
    */
   printf("/////////////////\n");
   printf("Countdown problem\n");
   int countdown = 10;
   while(countdown != 0){
    printf("%d\n", countdown);
    countdown--;
   }
   printf("Happy New Year!\n");
   printf("/////////////////\n");


   //Print even numbers between 0 and 10
   printf("Print even numbers from [0, 10] \n");
   int i = 0;
   while (i <= 10){
    if(i % 2 == 0){
        printf("%d\n", i);
    }
    i++;
   }
   printf("/////////////////\n");
   //Count to 100 by 10's 
   printf("Count to 100 by 10s\n");
   for(int i = 1; i <= 10; i++){
       printf("%d\n", i * 10);
   }
   printf("/////////////////\n");
   
   
   //print multiplication table
   printf("Print a multiplication table\n");
   for(int j = 1; j <= 9; j++){
    for(int i = 1; i <= 9; i++){
        printf(" %d x %d = %d ", i, j, i * j);
   }
   printf("\n");
   }
   
   
   printf("\n");
   
   
   
   printf("/////////////////\n");
   //array find average age {20, 22, 18, 35, 48, 26, 87, 70};
   printf("Find average of ages\n");
   int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
   int length = sizeof(ages) / sizeof(ages[0]);
   int sum; 
   for(int i = 0; i < length; i++){
      sum += ages[i];
   }
   int average = sum / length;
   printf("Average Age: %d\n", average);
   
   
   
   printf("/////////////////\n");
   //array find lowest age (above ages)
   printf("Find lowest age\n");
   int min = ages[0];
   for(int i = 0; i < length; i++){
    if(ages[i] < min){
        min = ages[i];
    }
   }
   printf("Lowest age: %d\n", min);
   



   //exercises
   printf("/////////////////\n");
   //p1.c
   //print address, value, and size of each variable
   double dbl = 55.5; 
   int integer = 30;
   char character = "C";

   double *dblptr = &dbl;
   int *integerptr = &integer;
   char *characterptr = &character;

   printf("dbl: address = %p, value = %.1f, size = %lu\n", &dbl, dbl, sizeof(dbl));
   printf("integer: address = %p, value = %d, size = %lu\n", &integer, integer, sizeof(integer));
   printf("character: address = %p, value = %c, size = %lu\n", &character, character, sizeof(character));
   printf("*dblptr: address = %p, value = %p, size = %lu\n", &dblptr, dblptr, sizeof(dblptr));
   printf("*integerptr: address = %p, value = %p, size = %lu\n", &integerptr, integerptr, sizeof(integerptr));
   printf("*characterptr = address = %p, value = %p, size = %lu\n", &characterptr, characterptr, sizeof(characterptr));
   printf("/////////////////\n");

   //p2.c
   //read two numbers from user, add them using pointers
   int num1;
   int num2;

   printf("Enter number 1: ");
   scanf("%d", &num1);
   printf("Enter number 2: ");
   scanf("%d", &num2);
   
   int *num1ptr = &num1;
   int *num2ptr = &num2;

   printf("The sum of your two numbers is: %d\n", *num1ptr + *num2ptr);
   
   printf("/////////////////\n");
   printf("\n");
}
