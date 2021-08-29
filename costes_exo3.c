#include <stdio.h>
#include <unistd.h>

int main(void){
    pid_t pid;
    pid = fork();

    if ( pid != 0) {
        printf("Je suis le pere %d %d\n", getpid(), pid);
        // sleep(3);
    } else {
        sleep(3);
        printf("Je suis le fils %d %d\n", getpid(), getppid());
    }

    return 0;
}
