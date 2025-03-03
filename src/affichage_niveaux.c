#include "affichage_niveau.h"
#include <stdio.h>
#include <windows.h>

struct coordonnees {
    int x, y;
};

void couleur(int couleurDuTexte, int couleurDeFond) {
    HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, couleurDeFond * 16 + couleurDuTexte);
}

void afficher_niveau(char niveau[11][11]) {
    couleur(0, 13);
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            printf(" %c ", niveau[i][j]);
        }
        printf("\n");
    }
    couleur(15, 0);
}

void creationniveau1(char niveau[11][11], struct coordonnees *coor_snoopy) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau[i][j] = ' ';
        }
    }

    for (int i = 0; i < 11; i++) {
        niveau[i][0] = '#';
        niveau[i][10] = '#';
        niveau[0][i] = '#';
        niveau[10][i] = '#';
    }

    niveau[y][x] = 'S';
    niveau[0][0] = 'B';
    niveau[0][9] = 'B';
    niveau[4][3] = 'B';
    niveau[4][9] = 'B';
    niveau[8][0] = 'B';
    niveau[8][9] = 'B';
    niveau[1][1] = 'y';
    niveau[1][9] = 'y';
    niveau[9][1] = 'y';
    niveau[9][9] = 'y';
    niveau[1][9] = 's';
    niveau[3][7] = 's';
    niveau[7][7] = 's';
    niveau[8][9] = 's';
    niveau[4][5] = '^';
    niveau[6][5] = 'v';
    niveau[8][5] = '>';
    niveau[2][1] = 'c';
    niveau[1][2] = 'c';
    niveau[1][8] = 'c';
    niveau[2][9] = 'c';
    niveau[8][9] = 'c';
}

void creationniveau2(char niveau[11][11], struct coordonnees *coor_snoopy) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau[i][j] = ' ';
        }
    }

    for (int i = 0; i < 11; i++) {
        niveau[i][0] = '#';
        niveau[i][10] = '#';
        niveau[0][i] = '#';
        niveau[10][i] = '#';
    }

    niveau[y][x] = 'S';
    niveau[2][1] = 'y';
    niveau[3][4] = 'y';
    niveau[1][5] = 'y';
    niveau[6][7] = 'y';
    niveau[4][1] = 'c';
    niveau[8][2] = '#';
    niveau[5][2] = '#';
    niveau[4][3] = 'B';
    niveau[4][8] = 'B';
    niveau[4][9] = 'B';
    niveau[1][6] = 'c';
    niveau[2][8] = 'B';
    niveau[2][9] = 'B';
    niveau[2][4] = 'B';
    niveau[1][4] = 'c';
    niveau[8][6] = 'c';
    niveau[8][9] = 'B';
    niveau[8][4] = 'B';
    niveau[9][4] = 'c';
}

void creationniveau3(char niveau[11][11], struct coordonnees *coor_snoopy) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau[i][j] = ' ';
        }
    }

    for (int i = 0; i < 11; i++) {
        niveau[i][0] = '#';
        niveau[i][10] = '#';
        niveau[0][i] = '#';
        niveau[10][i] = '#';
    }

    niveau[y][x] = 'S';
    niveau[0][1] = 'y';
    niveau[0][9] = 'y';
    niveau[10][1] = 'y';
    niveau[10][9] = 'y';
    niveau[2][2] = 'c';
    niveau[2][8] = 'c';
    niveau[3][1] = 'c';
    niveau[8][1] = 'c';
    niveau[8][9] = 'c';
    niveau[9][0] = 'c';
    niveau[9][9] = 'c';
    niveau[0][4] = 'B';
    niveau[4][5] = 'B';
    niveau[0][0] = 'B';
    niveau[3][2] = 'B';
    niveau[1][4] = 'B';
    niveau[7][2] = 'B';
    niveau[7][8] = 'B';
}

void creationniveau4(char niveau[13][11], struct coordonnees *coor_snoopy) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    for (int i = 0; i < 13; i++) {
        for (int j = 0; j < 11; j++) {
            niveau[i][j] = ' ';
        }
    }

    for (int i = 0; i < 13; i++) {
        niveau[i][0] = '#';
        niveau[i][10] = '#';
        niveau[0][i] = '#';
        niveau[10][i] = '#';
    }

    niveau[y][x] = 'S';
    niveau[1][1] = 'B';
    niveau[9][9] = 'B';
    niveau[2][5] = 'B';
    niveau[5][2] = 'B';
    niveau[5][6] = 'B';
    niveau[6][5] = 'B';
    niveau[4][4] = 'B';
    niveau[4][6] = 'B';
    niveau[6][4] = 'B';
    niveau[6][6] = 'B';
    niveau[2][2] = 'y';
    niveau[8][2] = 'y';
    niveau[2][8] = 'y';
    niveau[8][6] = 'y';
    niveau[1][2] = 'A';
    niveau[2][1] = 'A';
    niveau[1][9] = 'A';
    niveau[8][1] = 'A';
    niveau[9][2] = 'A';
    niveau[9][5] = 'A';
    niveau[2][7] = '^';
    niveau[5][9] = '^';
    niveau[8][3] = '^';
    niveau[8][1] = '^';
    niveau[2][3] = 'v';
    niveau[9][9] = 'v';
    niveau[3][2] = '>';
    niveau[1][7] = '>';
    niveau[3][8] = '>';
    niveau[4][2] = '<';
    niveau[6][7] = '<';
    niveau[7][2] = '<';
    niveau[7][8] = '<';
    niveau[1][3] = 'c';
    niveau[3][3] = 'c';
    niveau[9][1] = 'c';
    niveau[3][7] = 'c';
    niveau[5][9] = 'c';
    niveau[5][1] = 'c';
    niveau[7][1] = 'c';
    niveau[7][3] = 'c';
    niveau[9][3] = 'c';
    niveau[7][7] = 'c';
    niveau[1][9] = 'q';
    niveau[9][1] = 'q';
}

void recopier_niveau(char niveau_a_copier[11][11], char niveau_a_modifier[11][11]) {
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            niveau_a_modifier[i][j] = niveau_a_copier[i][j];
        }
    }
}
