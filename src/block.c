#include "block.h"

struct coordonnees {
    int x, y;
};

char recuperer_block(char niveau[11][11], struct coordonnees *coor_snoopy, char direction) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    char block = ' ';

    switch (direction) {
        case 'q':
            block = niveau[y][x - 1];
            break;
        case 'd':
            block = niveau[y][x + 1];
            break;
        case 'z':
            block = niveau[y - 1][x];
            break;
        case 's':
            block = niveau[y + 1][x];
            break;
    }

    return block;
}

int block_poussable_haut(char niveau[11][11], struct coordonnees *coor_snoopy, char direction) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    int autorisation_deplacement = 0;

    if (direction == 'z' && niveau[y - 2][x] == ' ') {
        niveau[y - 2][x] = niveau[y - 1][x];
        niveau[y - 1][x] = ' ';
        autorisation_deplacement = 1;
    }

    return autorisation_deplacement;
}

int block_poussable_bas(char niveau[11][11], struct coordonnees *coor_snoopy, char direction) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    int autorisation_deplacement = 0;

    if (direction == 's' && niveau[y + 2][x] == ' ') {
        niveau[y + 2][x] = niveau[y + 1][x];
        niveau[y + 1][x] = ' ';
        autorisation_deplacement = 1;
    }

    return autorisation_deplacement;
}

int block_poussable_droite(char niveau[11][11], struct coordonnees *coor_snoopy, char direction) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    int autorisation_deplacement = 0;

    if (direction == 'd' && niveau[y][x + 2] == ' ') {
        niveau[y][x + 2] = niveau[y][x + 1];
        niveau[y][x + 1] = ' ';
        autorisation_deplacement = 1;
    }

    return autorisation_deplacement;
}

int block_poussable_gauche(char niveau[11][11], struct coordonnees *coor_snoopy, char direction) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    int autorisation_deplacement = 0;

    if (direction == 'q' && niveau[y][x - 2] == ' ') {
        niveau[y][x - 2] = niveau[y][x - 1];
        niveau[y][x - 1] = ' ';
        autorisation_deplacement = 1;
    }

    return autorisation_deplacement;
}

void blockcassable(char niveau[11][11], struct coordonnees *coor_snoopy, char direction) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    switch (direction) {
        case 'q':
            niveau[y][x - 1] = ' ';
            break;
        case 'd':
            niveau[y][x + 1] = ' ';
            break;
        case 'z':
            niveau[y - 1][x] = ' ';
            break;
        case 's':
            niveau[y + 1][x] = ' ';
            break;
    }
}
