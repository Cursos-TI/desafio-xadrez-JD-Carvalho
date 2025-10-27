#include <stdio.h>

/*
  Desafio: Movimentando as Peças do Xadrez (Nível Aventureiro)
  Autor: [Seu Nome]
  Descrição:
    Este programa simula o movimento de quatro peças de xadrez — Torre, Bispo, Rainha e Cavalo —
    utilizando diferentes estruturas de repetição (for, while, do-while e loops aninhados).
*/

int main() {
    // =============================
    // 1️⃣ TORRE — usa o loop FOR
    // =============================
    int casasTorre = 5; // número de casas que a torre se moverá
    printf("Movimento da Torre:\n");

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

    do {
        printf("Esquerda (%d casa)\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n");

    // =============================
    // 4️⃣ CAVALO — usa LOOPS ANINHADOS (FOR + WHILE)
    // =============================
    /*
      O Cavalo se move em "L":
      - 2 casas em uma direção (aqui: para BAIXO)
      - 1 casa perpendicularmente (aqui: para ESQUERDA)
      Estrutura:
        -> Usamos um loop FOR para as 2 casas "para baixo"
        -> Dentro dele, um loop WHILE para a 1 casa "para esquerda"
    */

    int casasBaixo = 2;
    int casasEsquerda = 1;
    int k; // contador interno

    printf("Movimento do Cavalo:\n");

    for (int movBaixo = 1; movBaixo <= casasBaixo; movBaixo++) {
        printf("Baixo (%d casa)\n", movBaixo);

        // Agora o Cavalo vai se mover uma casa para a esquerda após as duas para baixo
        if (movBaixo == casasBaixo) {
            k = 1;
            while (k <= casasEsquerda) {
                printf("Esquerda (%d casa)\n", k);
                k++;
            }
        }
    }

    printf("\nSimulação concluída!\n");
    return 0;
}
