#include "vie.h"
#include <stdio.h>

void creation_vie(char vie[4]) {
    for (int i = 0; i < 4; i++) {
        vie[i] = 'H';
    }
}

void application_vie(char vie[4], int nb_vie) {
    printf("Nombre de vies:");
    for (int i = 0; i < nb_vie; i++) {
        printf(" %c ", vie[i]);
    }
    printf("\n");
}
