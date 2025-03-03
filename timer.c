//
// Created by Pierre on 12/11/2023.
//
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "timer.h"
#include "affichage niveau.h"

void creation_timer(char timer[6]) {
    for (int i = 0; i < 6; i++) {
        timer[i] = 0xDB;
    }
}

int application_timer(char timer[6], clock_t debut) {
    int temps_ecoule=0;
    // Récupérer le temps écoulé
    clock_t actuel = clock();
    double duree = (double)(actuel - debut) / CLOCKS_PER_SEC;

    // Affichage du timer
    int batton = (139 - (int)duree) / 20;
    printf("temps restant:");

    if (batton ==6 || batton==5 ||  batton ==4){
        couleur(10,0);
    }
    else if(batton ==3 ||batton==2){
        couleur(14,0);
    }
    else if(batton ==1){
        couleur(12,0);
    }
    for (int i = 0; i < batton; i++) {
        printf(" %c ", timer[i]);
    }
    printf("\n");
    couleur(15,0);

    // Analyse si le temps est terminé
    if (duree > 120) {
        temps_ecoule=1;
    }

    return temps_ecoule;
}