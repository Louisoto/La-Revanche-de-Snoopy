//
// Created by Pierre on 12/11/2023.
//

#include "deplacement.h"
#include <stdio.h>
#include <conio.h>

struct coordonnees {
    int x, y;
};
char obtenir_deplacement() {
    char direction;
    direction = getch();
    return direction;
}
void appliquer_deplacement(char niveau[11][11], struct coordonnees *coor_snoopy, char direction) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;

    niveau[y][x] = ' '; // Efface l'ancienne position du personnage

    switch (direction) {
        case 'q': // Gauche
            if (x > 1) {
                x--;
            }
            break;
        case 'd': // Droite
            if (x < 9) {
                x++;
            }
            break;
        case 'z': // Haut
            if (y > 1) {
                y--;
            }
            break;
        case 's': // Bas
            if (y < 9) {
                y++;
            }
            break;
    }

    coor_snoopy->x = x;
    coor_snoopy->y = y;
    niveau[y][x] = 'S'; // Met à jour la nouvelle position du personnage
}