#include "deplacement.h"
#include <stdio.h>
#include <conio.h>

struct coordonnees {
    int x, y;
};

char obtenir_deplacement() {
    return getch();
}

void appliquer_deplacement(char niveau[11][11], struct coordonnees *coor_snoopy, char direction) {
    int x = coor_snoopy->x;
    int y = coor_snoopy->y;
    niveau[y][x] = ' ';

    switch (direction) {
        case 'q':
            if (x > 0) x--;
            break;
        case 'd':
            if (x < 10) x++;
            break;
        case 'z':
            if (y > 0) y--;
            break;
        case 's':
            if (y < 10) y++;
            break;
    }

    coor_snoopy->x = x;
    coor_snoopy->y = y;
    niveau[y][x] = 'S';
}
