//
// Created by Pierre on 12/11/2023.
//

#ifndef NIVEAU_1_PROCEDURE_NIVEAU_H
#define NIVEAU_1_PROCEDURE_NIVEAU_H
struct coordonnees;
int procedure_niveau(char niveau[11][11], struct coordonnees *coor_snoopy,int balle) ;
int procedure_niveau_charger(char niveau[11][11], struct coordonnees *coor_snoopy,int nb_vie,char timer[6]);
#endif //NIVEAU_1_PROCEDURE_NIVEAU_H
