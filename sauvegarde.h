//
// Created by Pierre on 02/12/2023.
//

#ifndef NIVEAU_1_SAUVEGARDE_H
#define NIVEAU_1_SAUVEGARDE_H
struct coordonnees;
int sauvegarderniveau(char nomsauvegarde[100],char niveau[11][11],char timer[6],int nb_vie,struct coordonnees *coor_snoopy);
int lirefichierniveau(char nomsauvegarde[100],char niveau[11][11],char timer[6],int nb_vie,struct coordonnees *coor_snoopy);
int demandesauvegardeniveau(char nomsauvegarde[100],char niveau[11][11],char timer[6],int nb_vie,struct coordonnees *coor_snoopy);
int chargersauvegardeniveau();
#endif //NIVEAU_1_SAUVEGARDE_H
