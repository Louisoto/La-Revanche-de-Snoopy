cmake_minimum_required(VERSION 3.26)
project(niveau_1 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(niveau_1
        main.c
        deplacement.c
        deplacement.h
        "affichage niveau.c"
        "affichage niveau.h"
        block.c
        block.h
        timer.c
        timer.h
        vie.c
        vie.h
        "procedure niveau.c"
        "procedure niveau.h"
        "niveau 1.c"
        "niveau 1.h"
        reglesdujeufinal.h
        motdepasse.h
        reglesdujeufinal.c
        motdepasse.c
        sauvegarde.c
        sauvegarde.h
        "affichage niveau2.c"
        "affichage niveau2.h"
        niveau2.c
        niveau2.h
        "affichage niveau3.c"
        "affichage niveau3.h"
        "niveau 3.c"
        "niveau 3.h"
        "affichage niveau4.c"
        "affichage niveau4.h"
        niveau4.c
        niveau4.h
        jeu.c
        jeu.h
        score.c
        score.h)



