#include <stdio.h>
#include <unistd.h>

int main(void){
    fork(); printf("fork(1)\n");
    fork(); printf("fork(2)\n");
    fork(); printf("fork(3)\n");
    return 0;
}
