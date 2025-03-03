//
// Created by Pierre on 12/11/2023.
//

#ifndef NIVEAU_1_BLOCK_H
#define NIVEAU_1_BLOCK_H
struct coordonnees;
char recuperer_block(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
int block_poussable_haut(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
int block_poussable_bas(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
int block_poussable_droite(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
int block_poussable_gauche(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
int blockcassable(char niveau[11][11], struct coordonnees *coor_snoopy,char direction);
#endif //NIVEAU_1_BLOCK_H
