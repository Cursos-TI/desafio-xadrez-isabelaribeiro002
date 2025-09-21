#include <stdio.h>

void movimentoTorre(int n) {               // imprime "Direita" n vezes (recursivo)
    if (n <= 0) return;
    printf("Direita\n");
    movimentoTorre(n - 1);
}

// Bispo: recursivo + loops aninhados
// Externo = vertical ("Cima"), Interno = horizontal ("Direita")
void movimentoBispo(int n) {
    if (n <= 0) return;

    for (int v = 0; v < 1; v++) {          // passo vertical
        printf("Cima\n");
        for (int h = 0; h < 1; h++) {      // passo horizontal
            printf("Direita\n");
        }
    }
    movimentoBispo(n - 1);
}

void movimentoRainha(int n) {              // imprime "Esquerda" n vezes (recursivo)
    if (n <= 0) return;
    printf("Esquerda\n");
    movimentoRainha(n - 1);
}

int main(void) {
    int Torre  = 5;
    int Bispo  = 5;
    int Rainha = 8;

    // TORRE — recursão
    movimentoTorre(Torre);

    // linha em branco separando peças
    printf("\n");

    // BISPO — recursão + loops aninhados
    movimentoBispo(Bispo);

    // linha em branco separando peças
    printf("\n");

    // RAINHA — recursão
    movimentoRainha(Rainha);

    // linha em branco separando peças
    printf("\n");

    // CAVALO — loops complexos (for + while, múltiplas condições)
    int L = 1;          // apenas um "L" como pede o desafio mestre
    for (int l = 0; l < L; l++) {   // controla quantos "L"
        int cima = 0, direita = 0;
        while (1) {
            if (cima < 2) {         // duas casas para cima
                printf("Cima\n");
                cima++;
                continue;
            }
            if (direita < 1) {      // uma casa para a direita
                printf("Direita\n");
                direita++;
            }
            if (cima == 2 && direita == 1) break; // L completo
        }
    }

    return 0;
}
