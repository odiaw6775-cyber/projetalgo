#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    char nom[50],prenom[60];
    int age;
    int frequence_secrete = (rand() % 100) + 1;
    int essais_restants = 8;
    int tentative;
    int phase2_reussie = 0;

    printf("==================================================\n");
    printf("         MISSION LOGIC BOMB : AUTHENTIFICATION    \n");
    printf("==================================================\n");

    printf("Identifiant (Nom de l'agent) : ");
    scanf(" %[^\n]",&nom);

    printf("Identifiant (prénom de l'agent) : ");
    scanf(" %[^\n]",&prenom);

    printf("Âge de l'agent : ");
    scanf("%d",&age);

    if (age < 18) {
        printf("\n[STATUT] : Mode Entraînement activé pour l'Agent %s %s.\n", nom,prenom);
    } else {
        printf("\n[STATUT] : Accès Expert accordé pour l'Agent %s %s.\n", nom,prenom);
    }
    printf("--------------------------------------------------\n\n");

    printf("==================================================\n");
    printf("         PHASE 2 : CALIBRAGE DE LA FRÉQUENCE      \n");
    printf("==================================================\n");
    printf("Système : Une fréquence secrète [1 - 100] a été générée.\n");
    printf("Attention : Vous avez %d essais avant l'explosion.\n\n", essais_restants);

    while (essais_restants > 0 && phase2_reussie == 0) {
        printf("Saisir la fréquence de calibrage (Essais restants : %d) : ", essais_restants);
        scanf("%d", &tentative);

        if (tentative == frequence_secrete) {
            printf("\n[SUCCÈS] : Fréquence verrouillée avec succès à %d Hz !\n", frequence_secrete);
            phase2_reussie = 1;
        } else {
            essais_restants--;

            if (essais_restants > 0) {
                if (tentative < frequence_secrete) {
                    printf("[ALERTE] : Fréquence trop BASSE.\n\n");
                } else {
                    printf("[ALERTE] : Fréquence trop HAUTE.\n\n");
                }
            }
        }
    }

    if (phase2_reussie == 1) {
        printf("\n==================================================\n");
        printf("         PHASE 3 : SYNCHRONISATION DES CADRANS    \n");
        printf("==================================================\n");
        printf("Initialisation du protocole de déverrouillage...\n");

        for (int cadranA = 1; cadranA <= 3; cadranA++) {
            for (int cadranB = 1; cadranB <= 3; cadranB++) {
                printf("Test Cadran A%d - Cadran B%d ... OK\n", cadranA, cadranB);
            }
        }

        printf("\n==================================================\n");
        printf("         VICTOIRE FINALE : MISSION RÉUSSIE        \n");
        printf("==================================================\n");
        printf("Félicitations Agent %s ! La bombe est entièrement désamorcée.\n", nom);
        printf("Le monde est sauf grâce à votre expertise.\n");
        printf("==================================================\n");

    } else {
        printf("\n==================================================\n");
        printf("                 [ BOOM !!! ]                     \n");
        printf("==================================================\n");
        printf("ÉCHEC DE LA MISSION. La fréquence correcte était %d Hz.\n", frequence_secrete);
        printf("L'Agent %s a été vaporisé...\n", nom);
        printf("==================================================\n");
    }

    return 0;
}
