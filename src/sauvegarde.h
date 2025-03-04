#ifndef SAUVEGARDE_H
#define SAUVEGARDE_H

int sauvegardeniveau(char nomsauvegarde[100], char niveau[11][11], char timer[6], int nb_vie, struct coordonnees *coor_snoopy);
int lirefichierniveau(char nomsauvegarde[100], char niveau[11][11], char timer[6], int nb_vie, struct coordonnees *coor_snoopy);
int demandesauvegardeniveau(char nomsauvegarde[100], char niveau[11][11], char timer[6], int nb_vie, struct coordonnees *coor_snoopy);
int chargersauvegardeniveau();

#endif
