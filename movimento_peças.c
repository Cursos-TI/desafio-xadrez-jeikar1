#include <stdio.h>

int main() {
  
    // movimento da rainha - 8 casas para a esquerda
    // estrutura de repetição = do-while
    int casasRainha = 8;
    int j = 0;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    // movimento do bispo - 5 casas na diagonal para cima e direita
    // estrutura de repetição = while
    int casasBispo = 5;
    int i = 0;
    printf("\nMovimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // movimento da torre - 5 casas para a direita
    // estrutura de repetição = for
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }


    return 0;
}
