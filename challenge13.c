#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2;
    float px, py;

    printf("Enter les coordoner de premier point du segment (x1|y1): ");
    scanf("%f|%f", &x1, &y1);

    printf("enter les coordoner de 2eme point du segment (x2|y2): ");
    scanf("%f|%f", &x2, &y2);

    printf("Enter les coordoner du point à tester (px|py): ");
    scanf("%f|%f", &px, &py);

    // l'equation de segment est y = ax + b
    float a = (y2 - y1) / (x2 - x1);
    float b = y2 - a * x2;

    if (py == a * px + b && px >= fmin(x1, x2) && px <= fmax(x1, x2) && py >= fmin(y1, y2) && py <= fmax(y1, y2)) {
        printf("ce poit est apartient au  segment.");
    } else {
        printf("ce point n'apartient pas au segment.");
    }