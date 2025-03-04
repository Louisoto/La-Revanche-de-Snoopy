#include "reglesdujeu.h"
#include <stdio.h>

int reglesdujeu() {
    printf("Les regles du jeu sont les suivantes :\n\n");
    printf("a. Condition de fin du jeu :\n");
    printf(" - Victoire : pour gagner, il faut que vous recuperiez les 4 oiseaux du niveau. Dans ce cas la, vous passerez directement au niveau suivant,\n"
           " - Defaite : si vous perdez toutes vos vies, un ecran \"GameOver\" et vous serez redirige vers le menu principal\n\n");
    printf("b. Deplacements :\n");
    printf(" Vous pouvez vous deplacer vers le Haut, le Bas, la Gauche et la Droite et d'une seule case a la fois. En cas d'obstacle,\n"
           " vous ne pouvez pas vous deplacer dans cette direction. Enfin, vous ne pouvez pas sortir des limitations du niveau.\n\n");
    printf("c. Mouvement de la balle :\n");
    printf(" La balle se deplace en diagonale et rebondit uniquement sur les murs. Attention : la balle peut quant a elle traverser tous les obstacles\n"
           " du terrain sans changer de direction. Si elle vous touche, vous avez perdu la partie.\n\n");
    printf("d. Types de blocs :\n");
    printf(" Au cours des niveaux, vous pourrez rencontrer 3 types de blocs :\n"
           " - les blocs poussables : vous pouvez les deplacer une fois dans une direction precise. Cependant, vous ne pouvez pas les faire sortir du niveau,\n"
           " - les blocs cassables : vous pouvez les casser en appuyant sur la touche \"c\". Le passage sera alors libre.\n"
           " - les blocs pieges : si vous touchez un bloc piege, la partie s'arrête car vous avez perdu.\n\n");
    printf("e. Gestion du temps :\n");
    printf(" Chaque niveau aura un timer initialise a 120 secondes. Si le timer atteint 0, vous perdez une vie.\n\n");
    printf("f. Methode de sportification :\n");
    printf(" Outre le fait de reussir un niveau dans le temps limite, vous aurez un score si vous reussissez. Le score est calcule en fonction du temps restant a la fin du niveau.\n"
           " Au fur et a mesure des niveaux, vos scores s'additionneront pour former le score final.\n\n");
    printf("g. Sauvegarde et chargement d'une partie\n");
    printf(" A chaque instant, vous pourrez sauvegarder votre partie. Pour cela, vous appuyerez sur la touche \"f\" de votre clavier.\n"
           " Il vous sera demande de donner un nom du fichier de sauvegarde, puis vous serez redirige vers le menu principal.\n"
           " Pour retrouver une partie sauvegardee, il faudra selectionner \"Charger une partie\" dans le menu principal\n"
           " Vous pourrez alors recuperer la partie de votre choix en donnant le nom du fichier de sauvegarde correspondant.\n\n");
    printf("h. Acceder à un niveau :\n");
    printf(" Chaque niveau sera accessible par un mot de passe unique. Vous pourrez donc acceder au niveau si vous connaissez le mot de passe.\n\n");
    printf("i. Mode pause :\n");
    printf(" Pour mettre en pause votre partie, il faudra appuyer sur la touche \"p\". Ainsi, le timer s'arretera, et il redemarrera si vous appuyez de nouveau sur \"p\".\n\n");
    return 0;
}
