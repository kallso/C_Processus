#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void){
    pid_t pid;
    int child_exit_status = 0;

    pid = fork();

    if ( pid == 0) {
        sleep(3);
        printf("Je suis le fils %d %d\n", getpid(), getppid());
        exit(0);
    }

    wait(&child_exit_status);
    printf("Je suis le pere %d %d\n", getpid(), pid);

    return 0;
}
