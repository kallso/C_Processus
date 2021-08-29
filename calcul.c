#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    char *ptr;

    char operation = argv[1][0];
    int operande1 = (int) strtol(argv[2], &ptr, 10);
    int operande2 = (int) strtol(argv[3], &ptr, 10);

    switch (operation) {
        case '+':
            exit(operande1 + operande2);
        case '-':
            exit(operande1 - operande2);
        case '/':
            exit(operande1 / operande2);
        case '*':
            exit(operande1 * operande2);
        default:
            exit(0);
    }
}
