#include <stdio.h>

/*
  Desafio: Movimentando as Peças do Xadrez — Nível Mestre
  Autor: [Seu Nome]
  Descrição:
    Este programa simula os movimentos das principais peças de xadrez:
    Torre, Bispo, Rainha e Cavalo.
    Agora, com recursividade e loops complexos!
*/

// =============================
// Funções recursivas
// =============================

// 1️⃣ TORRE — recursão simples (horizontal direita)
void moverTorre(int atual, int total) {
    if (atual > total) return; // caso base — fim da recursão
    printf("Direita (%d casa)\n", atual);
    moverTorre(atual + 1, total); // chamada recursiva
}

// 2️⃣ BISPO — recursão + loops aninhados (movimento diagonal)
void moverBispo(int atual, int total) {
    if (atual > total) return; // caso base

    // Loop aninhado para simular movimento diagonal:
    // loop externo: vertical (Cima)
    // loop interno: horizontal (Direita)
    for (int v = 1; v <= 1; v++) { // um passo para cima por recursão
        for (int h = 1; h <= 1; h++) { // um passo para direita por recursão
            printf("Cima, Direita (%d casa)\n", atual);
        }
    }

    moverBispo(atual + 1, total);
}

// 3️⃣ RAINHA — recursão simples (horizontal esquerda)
void moverRainha(int atual, int total) {
    if (atual > total) return;
    printf("Esquerda (%d casa)\n", atual);
    moverRainha(atual + 1, total);
}

// =============================
// CAVALO — loops complexos com múltiplas variáveis
// =============================
// Movimento: duas casas para CIMA e uma para a DIREITA (em “L”)
void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo controla o movimento vertical
    for (int cima = 1, direita = 0; cima <= casasCima; cima++, direita++) {

        // Quando o cavalo fizer o último movimento para cima,
        // ele fará uma casa para a direita.
        if (cima <= casasCima) {
            printf("Cima (%d casa)\n", cima);
        }

        // Loop interno com controle extra de fluxo
        for (int d = 1; d <= casasDireita; d++) {
            if (cima < casasCima) continue; // só move para direita no final
            printf("Direita (%d casa)\n", d);
            break; // movimento de L completo — sai do loop interno
        }
    }
}

// =============================
// Função principal
// =============================
int main() {
    printf("=== Movimentos das Peças de Xadrez ===\n\n");

    // TORRE — 5 casas para a direita
    printf("Movimento da Torre:\n");
    moverTorre(1, 5);
    printf("\n");

    // BISPO — 5 casas na diagonal (Cima, Direita)
    printf("Movimento do Bispo:\n");
    moverBispo(1, 5);
    printf("\n");

    // RAINHA — 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    moverRainha(1, 8);
    printf("\n");

    // CAVALO — movimento em L (2 para cima, 1 para direita)
    moverCavalo();

    printf("\nSimulação concluída com sucesso!\n");
    return 0;
}
