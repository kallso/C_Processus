#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int global = 0;

int main(void){
    pid_t pid;
    int child_exit_status = 0;

    pid = fork();

    if ( pid == 0) {
        // Fils
        sleep(3);
        printf("Je suis le fils %d %d\n", getpid(), getppid());
        exit(16);
    }

    // Tout
    wait(&child_exit_status);
    printf("Je suis le pere %d %d\n", getpid(), pid);
    printf("Valeur de retour du fils %d\n", WEXITSTATUS(child_exit_status));

    return 0;
}
