#include <stdio.h>

struct House{
    char address[200];
    int squarefeet;
    int bedroom;
    int bathroom;
    float price;
};

void main(){
    struct House house1 = {"111 Lake Hollingsworth Drive", 100000, 500, 300, 70300500};
    struct House house2 = {"1600 Pennsylvania Avenue", 55000, 132, 35, 400000000};
    struct House house3 = {"Piazza del Colosseo", 258333, 0, 7, 1000000000};

    printf("%s %d %d %d %.2f\n", house1.address, house1.bedroom, house1.bathroom, house1.price);
    printf("%s %d %d %d %.2f\n", house2.address, house2.bedroom, house2.bathroom, house2.price);
    printf("%s %d %d %d %.2f\n", house3.address, house3.bedroom, house3.bathroom, house3.price);
}
