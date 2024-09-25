#include <stdio.h>

int main() {
    int a ;
    printf("entrer le nombre :");
    scanf("%d",&a);
    if (a % 2 == 0)
        printf("ce nombre est pair");
    else 
        printf("ce nombre est impair");
    
    return 0;
}