#include <stdio.h>

/*
  Desafio: Movimentando as Peças do Xadrez
  Autor: [Seu Nome]
  Descrição:
    Este programa simula o movimento de três peças de xadrez — Torre, Bispo e Rainha —
    utilizando diferentes estruturas de repetição (for, while e do-while).
*/

int main() {
    // =============================
    // 1️⃣ TORRE — usa o loop FOR
    // =============================
    int casasTorre = 5; // número de casas que a torre se moverá
    printf("Movimento da Torre:\n");

    // A Torre move-se em linha reta — aqui, simularemos movimento para a direita
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n");

    // =============================
    // 2️⃣ BISPO — usa o loop WHILE
    // =============================
    int casasBispo = 5; // número de casas que o bispo se moverá
    int i = 1;
    printf("Movimento do Bispo:\n");

    // O Bispo move-se na diagonal — aqui, simularemos "Cima, Direita"
    while (i <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", i);
        i++;
    }

    printf("\n");

    // =============================
    // 3️⃣ RAINHA — usa o loop DO-WHILE
    // =============================
    int casasRainha = 8; // número de casas que a rainha se moverá
    int j = 1;
    printf("Movimento da Rainha:\n");

    // A Rainha pode mover-se em qualquer direção — simularemos movimento para a esquerda
    do {
        printf("Esquerda (%d casa)\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n");

    // Fim do programa
    printf("Simulação concluída!\n");

    return 0;
}
