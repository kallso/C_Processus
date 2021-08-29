#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int global = 0;

int main(void){
    pid_t pid;
    int local = 0;

    printf("local = %d, global = %d\n", local, global);

    pid = fork();

    if ( pid != 0) {
        // Pere
        /*local = 14;
        global = 14;*/

        printf("Dans le PERE : local = %d, global = %d\n", local, global);
    } else {
        // Fils
        local = 14;
        global = 14;

        printf("Dans le FILS : local = %d, global = %d\n", local, global);
    }

    // Tout




    /**
     * On remarque que peut importe d'ou on modifie ces variables et peu importe la portée des variables
     * comme les deux processsus sont par essence dans un espace memoire distinct ET protegé aucune modification
     * ne peux impacter l'autre.
     */

    // P1        P2
    // CODE      CODE
    // Donnees   Donnees
    // Stacks     Stacks
    // Pile       Pile
    // Handlers   Handlers

    return 0;
}
