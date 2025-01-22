#include <stdio.h>

float fahrenheitToCelsius(float f){
    //convert Fahrenheit to Celsius
    return (f -32) * 5/9;
}

float areaWidthHeight(float width, float height){
    //get area from width and height (w * h)
    float area = width * height;
    return area;
}

double areaFromRadius(double radius){
    //get area from radius
    double pi = 3.14159;
    double area = pi * (radius * radius);
    printf("%.2f\n", area);
    return area;
}

void main(){
    int myNumbers[4] = {25, 50, 75, 100};
    int length = sizeof(myNumbers)/sizeof(myNumbers[0]);
    //get the memory address of the myNumbers array
    printf("%p\n", myNumbers);

    //Get the memory address of the first array element
    printf("%p\n", &myNumbers[0]);

    //print second element in array
    printf("%d\n", *&myNumbers[1]);

    for (int i = 0; i < length; i++){
       printf("%d\n", *(myNumbers + i));
       printf("%d\n", myNumbers[i]);
    }
    
    printf("//////////////\n");
    //exercise 1
    float fahrenheit;
    printf("Enter the temperature (F): ");
    scanf("%f", &fahrenheit);
    printf("%.2f F  = %.2f C\n", fahrenheit, fahrenheitToCelsius(fahrenheit));
    
    //exercise 2
    float width;
    float height;
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);
    printf("The area of %.2f x %.2f = %.2f\n", width, height, areaWidthHeight(width, height));

    float radius;
    printf("Enter radius to get area: ");
    scanf("%f", &radius);
    printf("The area of a circle with radius %.2f = %.2f\n", radius, areaFromRadius(radius));
}

