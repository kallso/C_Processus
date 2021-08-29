#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void){
    pid_t pid;
    int child_exit_status;
    pid = fork();

    if ( pid == 0) {
        // fils
        srand(getpid());
        int r = rand() % 5;
        printf("DU FILS : Nombre aleatoire du fils : %d \n", r);
        exit(r);
    } else {
        // pere
        wait(&child_exit_status);
        printf("DU PERE : Nombre aleatoire du fils : %d \n", child_exit_status >> 8);
    }

    return 0;
}
