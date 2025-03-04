#include "timer.h"
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "affichage_niveau.h"

void creation_timer(char timer[6]) {
    for (int i = 0; i < 6; i++) {
        timer[i] = '|';
    }
}

int application_timer(char timer[6], clock_t debut) {
    int temps_ecoule = 0;
    clock_t actuel = clock();
    double duree = (double)(actuel - debut) / CLOCKS_PER_SEC;
    int batton = (int)duree / 20;

    printf("Temps restant:");
    if (batton >= 6) {
        couleur(10, 0);
    } else if (batton >= 4) {
        couleur(14, 0);
    } else if (batton >= 2) {
        couleur(12, 0);
    }

    for (int i = 0; i < batton; i++) {
        printf(" %c ", timer[i]);
    }
    printf("\n");
    couleur(15, 0);

    if (duree > 120) {
        temps_ecoule = 1;
    }

    return temps_ecoule;
}
