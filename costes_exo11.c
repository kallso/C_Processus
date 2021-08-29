#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void){
    char operations[] = { '+', '-', '*', '/' };

    char operation;
    int operande1;
    int operande2;

    int nbOperations = 0;

    __pid_t pid;

    // Pour lecture des deux operandes
    char *ptr;
    char str[30];

    do {
        printf("Entrez le signe de l'operation : ");
        scanf("%c", &operation);
        getchar(); // consume the newline at the end of the input buffer that is not consumed by scanf

        for (int i = 0; i < (sizeof operations / sizeof operations[0]); ++i) {
            if (operations[i] == operation) {
                printf("Entrez les 2 opérandes : ");
                fgets(str, 30, stdin);
                operande1 = (int) strtol(str, &ptr, 10);
                fgets(str, 30, stdin);
                operande2 = (int) strtol(str, &ptr, 10);

                pid = fork();
                if (pid == 0) {
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
                nbOperations++;

            }
        }

    } while (operation != '.');

    for (int i = 0; i < nbOperations; i++) {
        int resulat;
        wait(&resulat);
        printf("%d \n", WEXITSTATUS(resulat));
    }

    return 0;
}
