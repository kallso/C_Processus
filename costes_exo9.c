#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void){
    pid_t pid;
    int child_exit_status;
    pid = fork();

    if ( pid == 0) {
        // fils1
        srand(getpid());
        int r = rand() % 4;
        sleep(r);
        exit(r);
    }

    // pere
    pid_t pid2;
    pid2 = fork();

    if (pid2 == 0) {
        // fils2
        srand(getpid());
        int r = rand() % 4;
        sleep(r);
        exit(r);
    }

    // pere
    wait(&child_exit_status);
    printf("1 processus a s'arreter a un temps de sleep de : %d  \n", child_exit_status >> 8);
    wait(&child_exit_status);
    printf("2eme processus a s'arreter a un temps de sleep de : %d  \n", child_exit_status >> 8);

    return 0;
}
