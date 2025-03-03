//
// Created by Pierre on 03/12/2023.
//

#include "affichage niveau3.h"
struct coordonnees {
    int x, y;
};

void creationniveau3(char niveau3[11][11], struct coordonnees *coor_snoopy) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    // Initialisation du tableau avec des espaces (vide)
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau3[i][j] = ' ';
        }
    }
// Ajout de bordures autour du tableau
    for (int i = 0; i < 11; i++) {
        niveau3[i][0] = '#';
        niveau3[i][10] = '#';
        niveau3[0][i] = '#';
        niveau3[10][i] = '#';
    }

    // Placement initial du personnage au centre du tableau
    niveau3[y][x] = 'S'; // Utilisation de 0xB pour représenter "♂"

    // Placement des oiseaux
    niveau3[1][1] = 'Y';
    niveau3[1][9] = 'Y';
    niveau3[9][1] = 'Y';
    niveau3[9][9] = 'Y';


    //placement des blocs cassables
    niveau3[1][2] = 'c';
    niveau3[2][2] = 'c';
    niveau3[2][1] = 'c';
    niveau3[3][1] = 'c';
    niveau3[7][1] = 'c';
    niveau3[8][1] = 'c';
    niveau3[8][2] = 'c';
    niveau3[9][2] = 'c';
    niveau3[1][8] = 'c';
    niveau3[2][8] = 'c';
    niveau3[2][9] = 'c';
    niveau3[3][9] = 'c';
    niveau3[9][8] = 'c';
    niveau3[8][8] = 'c';
    niveau3[8][9] = 'c';
    niveau3[7][9] = 'c';

    //placement des blocs piégés
    niveau3 [5] [4] = '&';
    niveau3 [4] [5] = '&';
    niveau3 [5] [6] = '&';

    //placement des blocs incassables
    niveau3[3] [2] = '@';
    niveau3[3] [8] = '@';
    niveau3[7] [2] = '@';
    niveau3[7] [8] = '@';
}
