#include <stdio.h>
#include <windows.h>
#include "deplacement.h"
#include "affichage_niveau.h"
#include "procedure_niveau.h"
#include "niveau1.h"
#include "reglesdujeu.h"
#include "motdepasse.h"
#include "sauvegarde.h"
#include "jeu.h"

int main() {
    int choix = 1;
    int scoretotal = 0;
    int score[5] = {0, 0, 0, 0, 0};

    while (choix > 0 && choix < 7) {
        printf("1. Regles du jeu\n"
               "2. Lancer un nouveau jeu à partir du niveau 1\n"
               "3. Charger une partie\n"
               "4. Mot de passe\n"
               "5. Scores\n"
               "6. Quitter\n");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                reglesdujeu();
                break;
            case 2:
                scoretotal = jeu();
                for (int i = 0; i < 5; i++) {
                    if (scoretotal > score[i]) {
                        for (int j = 4; j > i; j--) {
                            score[j] = score[j - 1];
                        }
                        score[i] = scoretotal;
                        break;
                    }
                }
                break;
            case 3:
                chargersauvegardeniveau();
                break;
            case 4:
                motdepasse();
                break;
            case 5:
                printf("\nMeilleurs scores:\n");
                for (int i = 0; i < 5; i++) {
                    printf(" - %d\n", score[i]);
                }
                break;
            case 6:
                printf("Merci d'avoir joué et à plus tard !");
                return 0;
        }
    }
    return 0;
}
