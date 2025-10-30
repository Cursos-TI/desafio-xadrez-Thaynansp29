#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // ==========================
    // Simulação da Torre (for)
    // ==========================
    // A torre se move em linha reta — neste caso, 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // ==========================
    // Simulação do Bispo (while)
    // ==========================
    // O bispo se move em diagonal — neste caso, 5 casas para cima e à direita
    int casasBispo = 5;
    int contador = 1;

    printf("Movimento do Bispo:\n");
    while (contador <= casasBispo) {
        printf("Cima, Direita (%d)\n", contador);
        contador++;
    }
    printf("\n");

    // ==========================
    // Simulação da Rainha (do-while)
    // ==========================
    // A rainha se move em qualquer direção — aqui, 8 casas para a esquerda
    int casasRainha = 8;
    int posicao = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d)\n", posicao);
        posicao++;
    } while (posicao <= casasRainha);

    printf("\nFim da simulação de movimentos!\n");


    return 0;
}
