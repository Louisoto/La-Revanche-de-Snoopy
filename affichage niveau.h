//
// Created by Pierre on 12/11/2023.
//

#ifndef NIVEAU_1_AFFICHAGE_NIVEAU_H
#define NIVEAU_1_AFFICHAGE_NIVEAU_H
struct coordonnees;
void couleur(int couleurDuTexte,int couleurDeFond);
void afficher_niveau(char niveau[11][11]);
void creationniveau1(char niveau1[11][11], struct coordonnees *coor_snoopy);
void recopier_niveau(char niveau_a_copier[11][11], char niveau_a_modifier[11][11]);
#endif //NIVEAU_1_AFFICHAGE_NIVEAU_H
