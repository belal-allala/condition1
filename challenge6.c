#include <stdio.h>

int main() {
    int nombre;

    printf("entrer le nombre :");
    scanf("%d", &nombre);

    if (nombre > 0) 
        printf("le nombre est positif.");
    else if (nombre < 0) 
        printf("le nombre est négatif.");
    else 
        printf("le nombre est nul.");
    return 0;
}