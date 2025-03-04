#include "jeu.h"
#include "niveau1.h"
#include "niveau2.h"
#include "niveau3.h"
#include "niveau4.h"

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
