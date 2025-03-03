//
// Created by Pierre on 12/11/2023.
//

#include <stdio.h>
#include "niveau 1.h"
#include "affichage niveau.h"
#include "procedure niveau.h"

struct coordonnees {
    int x, y;
};









//niveau 1
int niveau_1() {
    struct coordonnees coor_snoopy;
    coor_snoopy.x = 5;
    coor_snoopy.y = 5;
    int balle=0;

    char niveau1[11][11]; // Déclare un tableau 11x11 pour représenter la grille
    creationniveau1(niveau1, &coor_snoopy); // Création du niveau
    int score_niveau_1= procedure_niveau(niveau1, &coor_snoopy, balle);

    if (score_niveau_1 !=0) {
        printf("score: %d \n", score_niveau_1);
    }

    return score_niveau_1;
}