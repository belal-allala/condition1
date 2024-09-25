#include <stdio.h>

int main() {
    char caractere;
    printf("entrer un caractère : ");
    scanf("%c", &caractere);
    if (caractere >= 'A' && caractere <= 'Z') 
        printf("%c est une lettre majuscule", caractere);
    else
        printf("%c n'est pas une lettre majuscule", caractere);
    return 0;
}