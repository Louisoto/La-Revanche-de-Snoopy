//
// Created by Pierre on 03/12/2023.
//

#include "niveau2.h"
#include <stdio.h>

#include "affichage niveau2.h"
#include "procedure niveau.h"

struct coordonnees {
    int x, y;
};



//niveau 2
int niveau_2() {
    struct coordonnees coor_snoopy;
    coor_snoopy.x = 5;
    coor_snoopy.y = 5;
    int balle=0;

    char niveau2[11][11]; // Déclare un tableau 11x11 pour représenter la grille
    creationniveau2(niveau2, &coor_snoopy); // Création du niveau
    int score_niveau_1= procedure_niveau(niveau2, &coor_snoopy,balle);

    if (score_niveau_1 !=0) {
        printf("score: %d \n", score_niveau_1);
    }

    return score_niveau_1;
}