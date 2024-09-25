#include <stdio.h>

int main() {
    int choix, annee, mois, jour, heure, minute, seconde;
    printf("menu de conversion :\n");
    printf("1. convertir une annee en mois\n");
    printf("2. convertir une annee en jours\n");
    printf("3. convertir une annee en heures\n");
    printf("4. convertir une annee en minutes\n");
    printf("5. convertir une annee en secondes\n");
    printf("entrer votre choix : ");
    scanf("%d", &choix);
    printf("Entrer une annee : ");
    scanf("%d", &annee);

    switch (choix) {
        case 1:
            mois = annee * 12;
            printf("%d années équivalent à %d mois\n", annee, mois);
            break;
        case 2:
            jour = annee * 365;
            printf("%d années équivalent à %d jours\n", annee, jour);
            break;
        case 3:
            heure = annee * 365 * 24;
            printf("%d années équivalent à %d heures\n", annee, heure);
            break;
        case 4:
            minute = annee * 365 * 24 * 60;
            printf("%d années équivalent à %d minutes\n", annee, minute);
            break;
        case 5:
            seconde = annee * 365 * 24 * 60 * 60;
            printf("%d années équivalent à %d secondes\n", annee, seconde);
            break;
        default:
                printf("Choix n'est pas valide.\n");
    } 
    return 0;
}