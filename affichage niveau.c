//
// Created by Pierre on 12/11/2023.
//
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <windows.h>
#include "affichage niveau.h"
struct coordonnees {
    int x, y;
};
void couleur(int couleurDuTexte,int couleurDeFond){ // fonction d'affichage de couleurs
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
void afficher_niveau(char niveau[11][11]) {
    couleur(0,13);
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            printf(" %c ", niveau[i][j]);
        }
        printf("\n");
    }
    couleur(15,0);
}
void creationniveau1(char niveau1[11][11], struct coordonnees *coor_snoopy) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    // Initialisation du tableau avec des espaces (vide)
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau1[i][j] = ' ';
        }
    }
// Ajout de bordures autour du tableau
    for (int i = 0; i < 11; i++) {
        niveau1[i][0] = '#';
        niveau1[i][10] = '#';
        niveau1[0][i] = '#';
        niveau1[10][i] = '#';
    }

    // Placement initial du personnage au centre du tableau
    niveau1[y][x] = 'S'; // Utilisation de 0xB pour représenter "♂"

    // Ajout de blocs incassables
    niveau1[2][2] = '@';
    niveau1[2][8] = '@';
    niveau1[4][1] = '@';
    niveau1[6][1] = '@';
    niveau1[4][9] = '@';
    niveau1[6][9] = '@';
    niveau1[8][2] = '@';
    niveau1[8][8] = '@';

    // Placement des oiseaux
    niveau1[1][1] = 'Y';
    niveau1[9][1] = 'Y';
    niveau1[1][9] = 'Y';
    niveau1[9][9] = 'Y';

    // Placement des blocs piégés
    niveau1[1][5] = '&';
    niveau1[3][7] = '&';
    niveau1[5][9] = '&';
    niveau1[7][7] = '&';
    niveau1[9][5] = '&';
    niveau1[7][3] = '&';
    niveau1[5][1] = '&';
    niveau1[3][3] = '&';

    //Placement de bloc poussable
    niveau1[4][5]='^';
    niveau1[6][5]='v';
    niveau1[8][5]='>';


    //placement de bloc cassable
    niveau1[2][1] = 'c';
    niveau1[1][2] = 'c';
    niveau1[1][8] = 'c';
    niveau1[2][9] = 'c';
    niveau1[8][9] = 'c';
    niveau1[9][8] = 'c';
    niveau1[9][2] = 'c';
    niveau1[8][1] = 'c';
}

void recopier_niveau(char niveau_a_copier[11][11], char niveau_a_modifier[11][11]) {
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau_a_modifier[i][j] = niveau_a_copier[i][j];
        }
    }
}
