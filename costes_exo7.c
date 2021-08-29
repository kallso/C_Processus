#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void){
    int status;
    printf("Sans wait \n");

    if ( fork() != 0) {
        // pere
        sleep(10);
        printf("Je suis le pere %d %d\n", getpid());
    } else {
        // fils
        printf("Je suis le fils %d %d\n", getpid(), getppid());
    }

    // wait(&status);

    return 0;
}
