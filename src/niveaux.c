#include "niveaux.h"
#include "affichage_niveaux.h"
#include "procedure_niveau.h"
#include <stdio.h>

struct coordonnees {
    int x, y;
};

int niveau1() {
    struct coordonnees coor_snoopy;
    coor_snoopy.x = 5;
    coor_snoopy.y = 5;
    int balle = 0;
    char niveau1[11][11];
    creationniveau1(niveau1, &coor_snoopy);
    int score_niveau_1 = procedure_niveau(niveau1, &coor_snoopy, balle);
    if (score_niveau_1 != 0) {
        printf("Score: %d\n", score_niveau_1);
    }
    return score_niveau_1;
}

int niveau2() {
    struct coordonnees coor_snoopy;
    coor_snoopy.x = 5;
    coor_snoopy.y = 5;
    int balle = 1;
    char niveau2[11][11];
    creationniveau2(niveau2, &coor_snoopy);
    int score_niveau_2 = procedure_niveau(niveau2, &coor_snoopy, balle);
    if (score_niveau_2 != 0) {
        printf("Score: %d\n", score_niveau_2);
    }
    return score_niveau_2;
}

int niveau3() {
    struct coordonnees coor_snoopy;
    coor_snoopy.x = 5;
    coor_snoopy.y = 5;
    int balle = 1;
    char niveau3[11][11];
    creationniveau3(niveau3, &coor_snoopy);
    int score_niveau_3 = procedure_niveau(niveau3, &coor_snoopy, balle);
    if (score_niveau_3 != 0) {
        printf("Score: %d\n", score_niveau_3);
    }
    return score_niveau_3;
}

int niveau4() {
    struct coordonnees coor_snoopy;
    coor_snoopy.x = 5;
    coor_snoopy.y = 5;
    int balle = 0;
    char niveau4[13][11];
    creationniveau4(niveau4, &coor_snoopy);
    int score_niveau_4 = procedure_niveau(niveau4, &coor_snoopy, balle);
    if (score_niveau_4 != 0) {
        printf("Score: %d\n", score_niveau_4);
    }
    return score_niveau_4;
}
