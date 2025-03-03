//
// Created by Pierre on 03/12/2023.
//

#include "affichage niveau2.h"
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "affichage niveau2.h"
struct coordonnees {
    int x, y;
};
void couleur2(int couleurDuTexte,int couleurDeFond){ // fonction d'affichage de couleurs
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}
void afficher_niveau2(char niveau[11][11]) {
    couleur2(0,13);
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            printf(" %c ", niveau[i][j]);
        }
        printf("\n");
    }
    couleur2(15,0);
}
void creationniveau2(char niveau2[11][11], struct coordonnees *coor_snoopy) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    // Initialisation du tableau avec des espaces (vide)
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau2[i][j] = ' ';
        }
    }
// Ajout de bordures autour du tableau
    for (int i = 0; i < 11; i++) {
        niveau2[i][0] = '#';
        niveau2[i][10] = '#';
        niveau2[0][i] = '#';
        niveau2[10][i] = '#';
    }

    // Placement initial du personnage au centre du tableau
    niveau2[y][x] = 'S'; // Utilisation de 0xB pour représenter "♂"

    // Placement des oiseaux
    niveau2[5][1] = 'Y';
    niveau2[5][9] = 'Y';
    niveau2[1][5] = 'Y';
    niveau2[9][5] = 'Y';


    //placement de bloc cassable et incassable
    niveau2[6][1] = 'c';
    niveau2[6][2] = '@';
    niveau2[5][2] = '@'; //blocs oiseau gauche
    niveau2[4][2] = '@';
    niveau2[4][1] = 'c';

    niveau2[6][9] = 'c';
    niveau2[6][8] = '@';
    niveau2[5][8] = '@'; //blocs oiseau droite
    niveau2[4][8] = '@';
    niveau2[4][9] = 'c';

    niveau2[1][6] = 'c';
    niveau2[2][6] = '@';
    niveau2[2][5] = '@'; //blocs oiseau haut
    niveau2[2][4] = '@';
    niveau2[1][4] = 'c';

    niveau2[9][6] = 'c';
    niveau2[8][6] = '@';
    niveau2[8][5] = '@'; //blocs oiseau bas
    niveau2[8][4] = '@';
    niveau2[9][4] = 'c';
}


void recopier_niveau2(char niveau_a_copier[11][11], char niveau_a_modifier[11][11]) {
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau_a_modifier[i][j] = niveau_a_copier[i][j];
        }
    }
}