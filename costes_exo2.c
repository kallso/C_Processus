#include <stdio.h>
#include <unistd.h>

int main(void){
    pid_t pid = fork();

    if ( pid != 0) {
        printf("Je suis le pere\n");
    } else {
        printf("Je suis le fils\n");
    }
    return 0;
}
