#include <stdio.h>

int main() {
    int h1, m1, s1, h2, m2, s2;

    printf("entrer le premier instant (HH:MM:SS): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("entrer le deuxième instant (HH:MM:SS): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;

    if (t1 < t2) 
        printf("le premier instant vient avant le deuxième.");
    else if (t1 > t2) 
        printf("le deuxième instant vient avant le premier.\n");
    else 
        printf("Il s'agit du même instant.\n");
    return 0;
}