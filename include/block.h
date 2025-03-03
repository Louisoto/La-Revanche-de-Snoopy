#ifndef BLOCK_H
#define BLOCK_H

char recuperer_block(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
int block_poussable_haut(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
int block_poussable_bas(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
int block_poussable_droite(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
int block_poussable_gauche(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);
void blockcassable(char niveau[11][11], struct coordonnees *coor_snoopy, char direction);

#endif
