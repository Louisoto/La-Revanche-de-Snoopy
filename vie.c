//
// Created by Pierre on 12/11/2023.
//
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "vie.h"
#include "affichage niveau.h"

void creation_vie(char vie[4]){
    for (int i = 0; i<4; i++) {
        vie[i] = 'H';
    }

}

void application_vie(char vie[4], int nb_vie){
    printf("nombre de vie:");
    for (int i = 0; i< nb_vie; i++) {

        printf(" %c ", vie[i]);

    }
    printf("\n");
}