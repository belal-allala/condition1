#include <stdio.h>
#include <string.h>

int main() {
    int jour, mois, annee;
    char mois_nom[12][10] = {"janvier", "fevrier", "mars", "avril", "mai", "juin","juillet", "aout", "septembre", "octobre", "novembre", "decembre"};

    printf("entrer la date au format JJ/MM/AAAA : ");
    scanf("%d/%d/%d", &jour, &mois, &annee);
    if (mois < 1 || mois > 12) 
        printf("mois n'est pas validie.");
    else
        printf("la date au nouveau format est : %d-%s-%d", jour, mois_nom[mois-1], annee);
    return 0;
}