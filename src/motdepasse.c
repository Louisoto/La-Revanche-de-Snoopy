#include "motdepasse.h"
#include <stdio.h>
#include <string.h>
#include "niveau1.h"
#include "niveau2.h"
#include "niveau3.h"
#include "niveau4.h"

int motdepasse() {
    char mdpNiv1[20] = "Aramis";
    char mdpNiv2[20] = "Athos";
    char mdpNiv3[20] = "Artagnan";
    char mdpNiv4[20] = "Porthos";
    char mdputilisateur[30];

    printf("Entrez le mot de passe correspondant au niveau sur lequel vous voulez jouer\n");
    scanf("%s", mdputilisateur);

    if (strcmp(mdputilisateur, mdpNiv1) == 0) {
        printf("Vous entrez dans le niveau 1\n");
        niveau1();
    } else if (strcmp(mdputilisateur, mdpNiv2) == 0) {
        printf("Vous entrez dans le niveau 2\n");
        niveau2();
    } else if (strcmp(mdputilisateur, mdpNiv3) == 0) {
        printf("Vous entrez dans le niveau 3\n");
        niveau3();
    } else if (strcmp(mdputilisateur, mdpNiv4) == 0) {
        printf("Vous entrez dans le niveau 4\n");
        niveau4();
    } else {
        printf("Mot de passe incorrect.\n");
    }

    return 0;
}
