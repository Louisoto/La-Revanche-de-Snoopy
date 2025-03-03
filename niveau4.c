//
// Created by Pierre on 03/12/2023.
//

#include <stdio.h>
#include "niveau4.h"
#include "affichage niveau4.h"
#include "procedure niveau.h"

struct coordonnees {
    int x, y;
};
int niveau_4() {
    struct coordonnees coor_snoopy;
    coor_snoopy.x = 5;
    coor_snoopy.y = 5;

    char niveau4[11][11];
    creationniveau4(niveau4, &coor_snoopy);
    int balle=0;
    int score_niveau_4= procedure_niveau(niveau4, &coor_snoopy, balle);

    if (score_niveau_4 !=0) {
        printf("score: %d \n", score_niveau_4);
    }

    return score_niveau_4;
}