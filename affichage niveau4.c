//
// Created by Pierre on 03/12/2023.
//

#include "affichage niveau4.h"
struct coordonnees {
    int x, y;
};
void creationniveau4(char niveau[11][11], struct coordonnees *coor_snoopy) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    // Initialisation du tableau avec des espaces (vide)
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau[i][j] = ' ';
        }
    }
// Ajout de bordures autour du tableau
    for (int i = 0; i < 11; i++) {
        niveau[i][0] = '#';
        niveau[i][10] = '#';
        niveau[0][i] = '#';
        niveau[10][i] = '#';
    }

    // Placement initial du personnage au centre du tableau
    niveau[y][x] = 'S';

    // Ajout de blocs incassables
    niveau[1][1] = '@';
    niveau[9][9] = '@';

    niveau[2][5] = '@';
    niveau[5][2] = '@';
    niveau[5][8] = '@';
    niveau[8][5] = '@';

    niveau[4][4] = '@';
    niveau[4][6] = '@';
    niveau[6][4] = '@';
    niveau[6][6] = '@';


    // Placement des oiseaux
    niveau[2][2] = 'Y';
    niveau[8][2] = 'Y';
    niveau[2][8] = 'Y';
    niveau[8][8] = 'Y';

    // Placement des blocs piégés
    niveau[1][2] = '&';
    niveau[2][1] = '&';
    niveau[1][5] = '&';
    niveau[8][1] = '&';
    niveau[9][2] = '&';
    niveau[9][5] = '&';


    //Placement de bloc poussable
    //haut
    niveau[2][7]='^';
    niveau[3][9]='^';
    niveau[8][3]='^';
    niveau[8][7]='^';

    //bas
    niveau[2][3]='v';
    niveau[7][9]='v';

    //droite
    niveau[3][2]='>';
    niveau[1][7]='>';
    niveau[3][8]='>';
    niveau[9][7]='>';
    niveau[7][2]='>';
    niveau[7][8]='>';



    //placement de bloc cassable
    niveau[1][3] = 'c';
    niveau[3][3] = 'c';
    niveau[3][1] = 'c';
    niveau[3][7] = 'c';
    niveau[5][9] = 'c';
    niveau[5][1] = 'c';
    niveau[7][1] = 'c';
    niveau[7][3] = 'c';
    niveau[9][3] = 'c';
    niveau[7][7] = 'c';


    //placement coeur
    niveau[1][9]= 'H';
    niveau[9][1]= 'H';
}