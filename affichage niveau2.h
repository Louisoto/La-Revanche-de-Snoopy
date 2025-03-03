//
// Created by Pierre on 03/12/2023.
//

#ifndef NIVEAU_1_AFFICHAGE_NIVEAU2_H
#define NIVEAU_1_AFFICHAGE_NIVEAU2_H
struct coordonnees;
void couleur2(int couleurDuTexte,int couleurDeFond);
void afficher_niveau2(char niveau[11][11]);
void creationniveau2(char niveau2[11][11], struct coordonnees *coor_snoopy);
void recopier_niveau2(char niveau_a_copier[11][11], char niveau_a_modifier[11][11]);
#endif //NIVEAU_1_AFFICHAGE_NIVEAU2_H
