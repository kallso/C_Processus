#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <errno.h>

int main(void){
    char operations[] = { '+', '-', '*', '/' };

    char operation;
    char *operande1;
    char *operande2;

    int nbOperations = 0;

    __pid_t pid;

    // Pour lecture des deux operandes
    char *ptr;
    char buffer1[30];
    char buffer2[30];

    do {
        printf("Entrez le signe de l'operation : ");
        scanf("%c", &operation);
        getchar(); // consume the newline at the end of the input buffer that is not consumed by scanf

        for (int i = 0; i < (sizeof operations / sizeof operations[0]); ++i) {
            if (operations[i] == operation) {
                printf("Entrez les 2 opérandes : ");
                operande1 = fgets(buffer1, 30, stdin);
                operande2 = fgets(buffer2, 30, stdin);

                pid = fork();

                if (pid == 0) {
                    int resultat = execl("calcul", "calcul", &operation, operande1, operande2, (char*) NULL);
                    printf("Resultat : %d \n", resultat);
                    printf("Error number is %d", errno);
                    perror("Error printed by perror");
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
