//
// Created by Pierre on 12/11/2023.
//

#ifndef NIVEAU_1_DEPLACEMENT_H
#define NIVEAU_1_DEPLACEMENT_H
struct coordonnees;
char obtenir_deplacement();
void appliquer_deplacement(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
#endif //NIVEAU_1_DEPLACEMENT_H
