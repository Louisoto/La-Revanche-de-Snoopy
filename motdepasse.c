//
// Created by Nathan on 31/10/2023.
//
#include <stdio.h>
#include <string.h>
#include "motdepasse.h"
#include "niveau 1.h"
#include "niveau2.h"
#include "niveau 3.h"
#include "niveau4.h"

int motdepasse(){
    char mdpNiv1[20] = "Aramis";
    char mdpNiv2[20] = "Athos";
    char mdpNiv3[20] = "d'Artagnan";
    char mdpNiv4[20] = "Porthos";
    char mdputilisateur[20];

    printf("Entrez le mot de passe correspondant au niveau sur lequel vous voulez jouer\n");
    scanf("%s", mdputilisateur);

    if (strcmp(mdputilisateur, mdpNiv1) == 0) {
        printf("Vous entrez dans le niveau 1\n");
        niveau_1();
    }

    else if (strcmp(mdputilisateur, mdpNiv2) == 0) {
        printf("Vous entrez dans le niveau 2\n");
        niveau_2();
    }

    else if (strcmp(mdputilisateur, mdpNiv3) == 0) {
        printf("Vous entrez dans le niveau 3\n");
        niveau_3();
    }

    else if (strcmp(mdputilisateur, mdpNiv4) == 0) {
        printf("Vous entrez dans le niveau 4\n");
        niveau_4();
    }

    else {
        printf("Mot de passe incorrect.\n");
    }
    return 0;

    }
