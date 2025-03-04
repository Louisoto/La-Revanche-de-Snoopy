#include "jeu.h"
#include "niveaux.h"

int jeu() {
    int scoretotal = 0;
    int scoreniveau1 = niveau1();
    if (scoreniveau1 != 0) {
        int scoreniveau2 = niveau2();
        if (scoreniveau2 != 0) {
            int scoreniveau3 = niveau3();
            if (scoreniveau3 != 0) {
                int scoreniveau4 = niveau4();
                scoretotal = scoreniveau1 + scoreniveau2 + scoreniveau3 + scoreniveau4;
            }
        }
    }
    return scoretotal;
}
