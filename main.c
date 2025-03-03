#include <stdio.h>
#include <time.h>
#include <windows.h>
#include "deplacement.h"
#include "affichage niveau.h"
#include "procedure niveau.h"
#include "niveau 1.h"
#include "reglesdujeufinal.h"
#include "motdepasse.h"
#include "sauvegarde.h"
#include "jeu.h"


#include <stdio.h>
//le jeu à été testé sous windows 10. Nous avons remarqué que le jeu rencontrait de léger soucis sous windows 11.
int main(){
    int choix=1;
    int scoretotal=0;
    int score[5]={0,0,0,0,0,};
    while (choix<7&&choix>0){
    printf ("1. Regles du jeu (affichees a l ecran)\n"
            "2. Lancer un nouveau Jeu a partir du niveau 1\n"
            "3. Charger une partie \n"
            "4. Mot de passe \n"
            "5. Scores \n"
            "6. Quitter\n");
    scanf("%d",&choix);

    if (choix==1){
        reglesdujeu();
    }
    if (choix==2){
        scoretotal=jeu();
        for (int i = 0; i < 5; i++) {//on enregistre le nouveau score
            if (scoretotal > score[i]) {
                for (int j = 4; j > i; j--) {
                    score[j] = score[j - 1];
                }
                score[i] = scoretotal;
                break;
            }
        }
    }
    if (choix==3){
        chargersauvegardeniveau();
    }


    if (choix==4){
        motdepasse();
    }
    if (choix==5){
        if (choix == 5) {
            printf("\nMeilleurs scores:\n\n");
            for (int i = 0; i < 5; i++) {
                printf("        - %d\n", score[i]);
            }
            printf("\n\n");
        }
    }
    if (choix==6){
        printf ("Merci d'avoir jouer et a plus tard !");
        return 0;
    }
    }
}
