#include "sauvegarde.h"
#include "procedure_niveau.h"
#include <stdio.h>

struct coordonnees {
    int x, y;
};

int sauvegardeniveau(char nomsauvegarde[100], char niveau[11][11], char timer[6], int nb_vie, struct coordonnees *coor_snoopy) {
    FILE *sauvegarde = fopen(nomsauvegarde, "w");
    if (sauvegarde == NULL) {
        printf("Erreur fopen");
        return 0;
    }
    fwrite(timer, sizeof(char), 6, sauvegarde);
    fwrite(&nb_vie, sizeof(int), 1, sauvegarde);
    fwrite(coor_snoopy, sizeof(struct coordonnees), 1, sauvegarde);
    for (int i = 0; i < 11; i++) {
        fwrite(niveau[i], sizeof(char), 11, sauvegarde);
    }
    fclose(sauvegarde);
    return 0;
}

int lirefichierniveau(char nomsauvegarde[100], char niveau[11][11], char timer[6], int nb_vie, struct coordonnees *coor_snoopy) {
    FILE *sauvegarde = fopen(nomsauvegarde, "r");
    if (sauvegarde == NULL) {
        printf("Erreur fopen");
        return 0;
    }
    fread(timer, sizeof(char), 6, sauvegarde);
    fread(&nb_vie, sizeof(int), 1, sauvegarde);
    fread(coor_snoopy, sizeof(struct coordonnees), 1, sauvegarde);
    for (int i = 0; i < 11; i++) {
        fread(niveau[i], sizeof(char), 11, sauvegarde);
    }
    fclose(sauvegarde);
    return 0;
}

int demandesauvegardeniveau(char nomsauvegarde[100], char niveau[11][11], char timer[6], int nb_vie, struct coordonnees *coor_snoopy) {
    printf("Quel nom voulez-vous pour votre sauvegarde ?\n");
    scanf("%s", nomsauvegarde);
    sauvegardeniveau(nomsauvegarde, niveau, timer, nb_vie, coor_snoopy);
    return 0;
}

int chargersauvegardeniveau() {
    char nomsauvegarde[100];
    char niveau[11][11];
    char timer[6];
    int nb_vie = 0;
    struct coordonnees coor_snoopy;

    printf("Quel est le nom de la sauvegarde que vous voulez charger ?\n");
    scanf("%s", nomsauvegarde);
    lirefichierniveau(nomsauvegarde, niveau, timer, nb_vie, &coor_snoopy);

    int score_niveau = procedure_niveau_charger(niveau, &coor_snoopy, nb_vie, timer);
    if (score_niveau != 0) {
        printf("Score: %d\n", score_niveau);
    }
    return 0;
}
