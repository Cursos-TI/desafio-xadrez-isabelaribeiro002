#include <stdio.h>

int main() {
    int Torre  = 5;
    int Bispo  = 5;
    int Rainha = 8;
    int L      = 1; // apenas 1 "L" como pede o desafio
    int Casa;

    // TORRE — FOR
    for (int i = 1; i <= Torre; i++) {
        printf("Direita\n");
    }

    // BISPO — WHILE
    int i = 1;
    while (i <= Bispo) {
        printf("Cima Direita\n"); // sem vírgula
        i++;
    }

    // RAINHA — DO-WHILE
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= Rainha);

    // linha em branco separando o Cavalo
    printf("\n");

    // CAVALO — FOR (L) + WHILE (casas do L)
    for (int l = 1; l <= L; l++) {
        Casa = 1;
        while (Casa <= 3) {
            if (Casa == 1 || Casa == 2) {
                printf("Baixo\n");
            } else { // Casa == 3
                printf("Esquerda\n");
            }
            Casa++;
        }
    }

    return 0;
}
