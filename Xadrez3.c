#include <stdio.h>

int main() {
    // ======================
    // TORRE (usa for)
    // ======================
    int casasTorre = 5;
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // ======================
    // BISPO (usa while)
    // ======================
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("\n=== Movimento do Bispo ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d)\n", contadorBispo);
        contadorBispo++;
    }

    // ======================
    // RAINHA (usa do-while)
    // ======================
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // ======================
    // CAVALO (usa loops aninhados)
    // ======================
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("\n=== Movimento do Cavalo ===\n");

    // Loop externo: movimento para baixo (for)
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo (%d)\n", i);
    }

    // Loop interno: movimento para a esquerda (while)
    int j = 1;
    while (j <= casasEsquerda) {
        printf("Esquerda (%d)\n", j);
        j++;
    }

    printf("\nSimulação concluída!\n");

    return 0;
}
