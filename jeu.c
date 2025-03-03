//
// Created by Pierre on 03/12/2023.
//

#include "jeu.h"
#include "niveau 1.h"
#include "niveau2.h"
#include "niveau 3.h"
#include "niveau4.h"

int jeu(){
int scoreniveau1=0;
int scoreniveau2=0;
int scoreniveau3=0;
int scoreniveau4=0;
int scoretotal =0;
    scoreniveau1=niveau_1();
    if(scoreniveau1!=0){
        scoreniveau2=niveau_2();
        if (scoreniveau2 != 0){
            scoreniveau3=niveau_3();
            if (scoreniveau3!=0){
                scoreniveau4=niveau_4();
            }
        }
    }
    scoretotal = scoreniveau1 + scoreniveau2 + scoreniveau3 + scoreniveau4;
    return scoretotal;

}