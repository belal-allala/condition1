
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, x1, x2;

    printf("entrer les coefficients de l'equation ax^2 + bx + c = 0 :\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        printf("l'equation admet deux solutions distinctes :\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } 
    else if (discriminant == 0) {
        x1 = -b / (2*a);
        printf("la solution de l'equation est :\n");
        printf("x1 = x2 = %.2f\n", x1);
    }
    else 
        printf("l'quation n'admet pas de solution\n");

    return 0;
}