#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void){

    if (fork() == 0) {
        // fils1
        for (int i = 0; i < 26; i++) {
            printf("1 - %d \n",i);
            //usleep(15);
        }
        exit(1);
    }

    if (fork() == 0) {
        // fils2
        for (int i = 26; i < 51; i++) {
            printf("2 - %d \n",i);
            //usleep(15);
        }
        exit(2);
    }

    // pere
    sleep(7);


    /* Voici l'affichage que j'ai quelque soit l'execution
     * 0
        26
        1
        27
        2
        28
        3
        29
        4
        30
        5
        31
        6
        32
        33
        7
        8
        34
        9
        35
        10
        36
        11
        37
        12
        38
        39
        13
        40
        14
        15
        41
        16
        42
        17
        43
        18
        44
        19
        45
        20
        46
        21
        47
        22
        23
        48
        24
        49
        25
        50


        J'en deduis donc que grace au usleep(15) l'ordonnanceur passe la main au prochain sous programme (le courant etant en attente)
        Si j'enleve le usleep(15) l'ordre est aleatoir, l'ordonnanceur doit sans doute donner la priorite au priorite au 2 sous programmes
        en fonction de la  disponibilite du processeur.

        */
    return 0;
}
