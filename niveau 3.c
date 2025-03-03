//
// Created by Pierre on 03/12/2023.
//

#include <stdio.h>
#include "niveau 3.h"
#include "affichage niveau3.h"
#include "procedure niveau.h"

struct coordonnees {
    int x, y;
};
int niveau_3() {
    struct coordonnees coor_snoopy;
    coor_snoopy.x = 5;
    coor_snoopy.y = 5;

    char niveau3[11][11];
    creationniveau3(niveau3, &coor_snoopy);
    int balle=1;
    int score_niveau_3= procedure_niveau(niveau3, &coor_snoopy, balle);

    if (score_niveau_3 !=0) {
        printf("score: %d \n", score_niveau_3);
    }

    return score_niveau_3;
}

