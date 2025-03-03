//
// Created by Pierre on 12/11/2023.
//
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "block.h"
struct coordonnees {
    int x, y;
};
char recuperer_block(char niveau[11][11], struct coordonnees *coor_snoopy, char direction) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    int block = 0;

    switch (direction) {
        case 'q': // Gauche
            block = niveau[y][x - 1];
            break;
        case 'd': // Droite
            block = niveau[y][x + 1];
            break;
        case 'z': // Haut
            block = niveau[y - 1][x];
            break;
        case 's': // Bas
            block = niveau[y + 1][x];
            break;
    }
    return block;
}

int block_poussable_haut(char niveau[11][11], struct coordonnees *coor_snoopy, char direction){
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    int autorisation_deplacement=0;

    if (direction=='z'){
        if (niveau[y-2][x]==' '){
            niveau[y-2][x]= '@';
            autorisation_deplacement=1;
        }

    }
    return autorisation_deplacement;
}

int block_poussable_bas(char niveau[11][11], struct coordonnees *coor_snoopy, char direction){
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    int autorisation_deplacement=0;

    if (direction=='s'){
        if (niveau[y+2][x]==' '){
            niveau[y+2][x]= '@';
            autorisation_deplacement=1;
        }

    }
    return autorisation_deplacement;
}

int block_poussable_droite(char niveau[11][11], struct coordonnees *coor_snoopy, char direction){
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    int autorisation_deplacement=0;

    if (direction=='d'){
        if (niveau[y][x+2]==' '){
            niveau[y][x+2]= '@';
            autorisation_deplacement=1;
        }

    }
    return autorisation_deplacement;
}

int block_poussable_gauche(char niveau[11][11], struct coordonnees *coor_snoopy, char direction){
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    int autorisation_deplacement=0;

    if (direction=='q'){
        if (niveau[y][x-2]==' '){
            niveau[y][x-2]= '@';
            autorisation_deplacement=1;
        }

    }
    return autorisation_deplacement;
}

int blockcassable(char niveau[11][11], struct coordonnees *coor_snoopy, char direction){
    int x= coor_snoopy->x;
    int y= coor_snoopy->y;

    switch (direction) {
        case 'q': // Gauche
            niveau[y][x-1]=' ';
            break;
        case 'd': // Droite
            niveau[y][x+1]=' ';
            break;
        case 'z': // Haut
            niveau[y-1][x]=' ';
            break;
        case 's': // Bas
            niveau[y+1][x]=' ';
            break;
    }
}