#include "procedure_niveau.h"
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "affichage_niveau.h"
#include "vie.h"
#include "timer.h"
#include "deplacement.h"
#include "block.h"
#include "sauvegarde.h"

struct coordonnees {
    int x, y;
};

int procedure_niveau(char niveau[11][11], struct coordonnees *coor_snoopy, int balle) {
    int sortie = 0, nb_vie = 5;
    clock_t debut = clock();
    char timer[6] = {0};
    char vie[4];
    int temps_ecoule = 0;
    char niveau_original[11][11];
    int x_original = coor_snoopy->x;
    int y_original = coor_snoopy->y;

    recopier_niveau(niveau, niveau_original);
    creation_vie(vie);
    creation_timer(timer);
    char direction;
    application_vie(vie, nb_vie);
    application_timer(timer, debut);
    afficher_niveau(niveau);
    char nomsauvegarde[100];
    int tour = 0;
    int coor_balle_x = 5, coor_balle_y = 7;

    if (balle == 1) {
        niveau[coor_balle_y][coor_balle_x] = 'o';
    }

    printf("Deplacez le personnage avec les touches 'q', 'd', 'z' et 's'; Appuyez sur 's' pour quitter, sur 'f' pour sauvegarder et sur 'g' pour mettre pause.\n");

    while (sortie < 4) {
        if (balle == 1) {
            if (tour % 16 >= 0 && tour % 16 <= 1) {
                niveau[coor_balle_y][coor_balle_x] = ' ';
                coor_balle_y++;
                coor_balle_x++;
                niveau[coor_balle_y][coor_balle_x] = 'o';
            } else if (tour % 16 >= 4 && tour % 16 <= 5) {
                niveau[coor_balle_y][coor_balle_x] = ' ';
                coor_balle_y++;
                coor_balle_x--;
                niveau[coor_balle_y][coor_balle_x] = 'o';
            } else if (tour % 16 >= 8 && tour % 16 <= 9) {
                niveau[coor_balle_y][coor_balle_x] = ' ';
                coor_balle_y--;
                coor_balle_x--;
                niveau[coor_balle_y][coor_balle_x] = 'o';
            } else if (tour % 16 >= 12 && tour % 16 <= 15) {
                niveau[coor_balle_y][coor_balle_x] = ' ';
                coor_balle_y--;
                coor_balle_x++;
                niveau[coor_balle_y][coor_balle_x] = 'o';
            }
        }

        direction = obtenir_deplacement();
        if (direction == 'p') {
            clock_t startP = clock();
            printf("Vous etes en pause, appuyez sur n'importe quelle touche pour continuer\n");
            getch();
            clock_t fin_pause = clock();
            debut += (fin_pause - startP);
        }
        if (direction == 's') {
            sortie = 4;
        }
        if (direction == 'f') {
            demandesauvegardeniveau(nomsauvegarde, niveau, timer, nb_vie, coor_snoopy);
        }

        char block = recuperer_block(niveau, coor_snoopy, direction);
        if (block == 'c') {
            printf("Appuyez sur 'w' pour detruire le bloc : \n");
            char pioche;
            scanf(" %c", &pioche);
            if (pioche == 'w') {
                blockcassable(niveau, coor_snoopy, direction);
            }
        }

        int autorisation_deplacement;
        switch (block) {
            case ' ':
                appliquer_deplacement(niveau, coor_snoopy, direction);
                break;
            case 'x':
                appliquer_deplacement(niveau, coor_snoopy, direction);
                sortie += 1;
                break;
            case '#':
                break;
            case '*':
                autorisation_deplacement = block_poussable_haut(niveau, coor_snoopy, direction);
                if (autorisation_deplacement == 1) {
                    appliquer_deplacement(niveau, coor_snoopy, direction);
                }
                break;
            case 'v':
                autorisation_deplacement = block_poussable_bas(niveau, coor_snoopy, direction);
                if (autorisation_deplacement == 1) {
                    appliquer_deplacement(niveau, coor_snoopy, direction);
                }
                break;
            case '>':
                autorisation_deplacement = block_poussable_droite(niveau, coor_snoopy, direction);
                if (autorisation_deplacement == 1) {
                    appliquer_deplacement(niveau, coor_snoopy, direction);
                }
                break;
            case '<':
                autorisation_deplacement = block_poussable_gauche(niveau, coor_snoopy, direction);
                if (autorisation_deplacement == 1) {
                    appliquer_deplacement(niveau, coor_snoopy, direction);
                }
                break;
            case 'o':
                couleur(0, 12);
                printf("////////i!i!!///i!n//VOUS ETES MORT//\n///i!i!!!!!!!!!!!!!!!!\n");
                couleur(15, 0);
                nb_vie--;
                if (nb_vie == 0) {
                    sortie = 6;
                } else {
                    sortie = 0;
                }
                coor_snoopy->x = x_original;
                coor_snoopy->y = y_original;
                recopier_niveau(niveau_original, niveau);
                coor_balle_x = 5;
                coor_balle_y = 1;
                if (balle == 1) {
                    niveau[coor_balle_y][coor_balle_x] = 'o';
                }
                tour = -1;
                break;
            case 'H':
                appliquer_deplacement(niveau, coor_snoopy, direction);
                nb_vie += 3;
                break;
        }

        tour++;
        system("cls");
        temps_ecoule = application_timer(timer, debut);
        if (temps_ecoule == 1) {
            couleur(0, 12);
            printf("/////////////////\n");
            couleur(12, 0);
            nb_vie--;
            if (nb_vie == 0) {
                sortie = 6;
            } else {
                sortie = 0;
            }
            coor_snoopy->x = x_original;
            coor_snoopy->y = y_original;
            recopier_niveau(niveau_original, niveau);
            debut = clock();
            coor_balle_x = 5;
            coor_balle_y = 1;
            if (balle == 1) {
                niveau[coor_balle_y][coor_balle_x] = 'o';
            }
            tour = -1;
        }
        application_vie(vie, nb_vie);
        afficher_niveau(niveau);
    }

    if (sortie == 4) {
        printf("FELICITATIONS, VOUS AVEZ GAGNE !\n");
    } else if (sortie == 5) {
        printf("Vous avez quitte de force...\n");
    } else if (sortie == 6) {
        printf("Vous n'avez plus de vie, vous avez perdu\n");
    }

    clock_t actuel = clock();
    double duree = (double)(actuel - debut) / CLOCKS_PER_SEC;
    int score = 100 * (120 - duree);
    if (sortie == 5 || sortie == 6) {
        score = 0;
    }
    return score;
}

int procedure_niveau_charger(char niveau[11][11], struct coordonnees *coor_snoopy, int nb_vie, char timer[6]) {
    int sortie = 0;
    clock_t debut = clock();
    char nomsauvegarde[100];
    char vie[4];
    char niveau_original[11][11];
    int x_original = coor_snoopy->x;
    int y_original = coor_snoopy->y;

    recopier_niveau(niveau, niveau_original);
    creation_vie(vie);
    creation_timer(timer);
    char direction;
    application_vie(vie, nb_vie);
    application_timer(timer, debut);
    afficher_niveau(niveau);

    printf("Deplacez le personnage avec les touches 'q', 'd', 'z' et 's'; Appuyez sur 's' pour quitter.\n");

    while (sortie < 4) {
        direction = obtenir_deplacement();
        if (direction == 's') {
            sortie = 4;
        }
        if (direction == 'f') {
            demandesauvegardeniveau(nomsauvegarde, niveau, timer, nb_vie, coor_snoopy);
        }

        char block = recuperer_block(niveau, coor_snoopy, direction);
        if (block == 'c') {
            printf("Appuyez sur 'w' pour detruire le bloc : \n");
            char pioche;
            scanf(" %c", &pioche);
            if (pioche == 'w') {
                blockcassable(niveau, coor_snoopy, direction);
            }
        }

        int autorisation_deplacement;
        switch (block) {
            case ' ':
                appliquer_deplacement(niveau, coor_snoopy, direction);
                break;
            case 'x':
                appliquer_deplacement(niveau, coor_snoopy, direction);
                sortie += 1;
                break;
            case '#':
                break;
            case '*':
                autorisation_deplacement = block_poussable_haut(niveau, coor_snoopy, direction);
                if (autorisation_deplacement == 1) {
                    appliquer_deplacement(niveau, coor_snoopy, direction);
                }
                break;
            case 'v':
                autorisation_deplacement = block_poussable_bas(niveau, coor_snoopy, direction);
                if (autorisation_deplacement == 1) {
                    appliquer_deplacement(niveau, coor_snoopy, direction);
                }
                break;
            case '>':
                autorisation_deplacement = block_poussable_droite(niveau, coor_snoopy, direction);
                if (autorisation_deplacement == 1) {
                    appliquer_deplacement(niveau, coor_snoopy, direction);
                }
                break;
            case '<':
                autorisation_deplacement = block_poussable_gauche(niveau, coor_snoopy, direction);
                if (autorisation_deplacement == 1) {
                    appliquer_deplacement(niveau, coor_snoopy, direction);
                }
                break;
            case 'o':
                couleur(0, 12);
                printf("////////i!i!!///i!n//VOUS ETES MORT//\n///i!i!!!!!!!!!!!!!!!!\n");
                couleur(15, 0);
                nb_vie--;
                if (nb_vie == 0) {
                    sortie = 6;
                } else {
                    sortie = 0;
                }
                coor_snoopy->x = x_original;
                coor_snoopy->y = y_original;
                recopier_niveau(niveau_original, niveau);
                break;
            case 'H':
                appliquer_deplacement(niveau, coor_snoopy, direction);
                nb_vie += 3;
                break;
        }

        sortie = application_timer(timer, debut);
        application_vie(vie, nb_vie);
        afficher_niveau(niveau);
    }

    if (sortie == 4) {
        printf("FELICITATIONS, VOUS AVEZ GAGNE !\n");
    } else if (sortie == 5) {
        printf("Vous avez quitte de force...\n");
    } else if (sortie == 6) {
        printf("Vous n'avez plus de vie, vous avez perdu\n");
    } else if (sortie == 7) {
        printf("Perdu ! Temps ecoule\n");
    }

    clock_t actuel = clock();
    double duree = (double)(actuel - debut) / CLOCKS_PER_SEC;
    int score = 100 * (120 - duree);
    if (sortie == 5 || sortie == 6 || sortie == 7) {
        score = 0;
    }
    return score;
}
