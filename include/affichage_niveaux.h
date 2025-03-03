#ifndef AFFICHAGE_NIVEAUX_H
#define AFFICHAGE_NIVEAUX_H

void afficher_niveau(char niveau[11][11]);
void creationniveau1(char niveau[11][11], struct coordonnees *coor_snoopy);
void creationniveau2(char niveau[11][11], struct coordonnees *coor_snoopy);
void creationniveau3(char niveau[11][11], struct coordonnees *coor_snoopy);
void creationniveau4(char niveau[13][11], struct coordonnees *coor_snoopy);
void recopier_niveau(char niveau_a_copier[11][11], char niveau_a_modifier[11][11]);
void couleur(int couleurDuTexte, int couleurDeFond);

#endif
