#include <stdio.h>
#include <unistd.h>

int main(void){
    fork(); printf("fork(1)\n");
    fork(); printf("fork(2)\n");
    fork(); printf("fork(3)\n");
    return 0;
}

/**
 * Il y aura 8 processus au total car au debut le premier fork creer un enfant (nb prog: 2)
 * PUIS ces deux programmes créer chacun un enfant donc 2 x 2 (nb prog: 4)
 * PUIS a nouveau meme operation donc 4 x 2 2 (nb prog: 8)
 *
 * Il y aura donc 2 + 4 + 8 = 14 occurences de printf et les deux premiers printf sont forcement sequentiels
 * et affiche fork(1)
 * PUIS les autres étant des enfants l'ordonanceur decidera de quand il les executera, cet ordre est donc imprevisible
 * et quelconque pour la suite des printf a moins de connaitre la file d'attente de l'ordonanceur.
 */
