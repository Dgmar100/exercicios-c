#include <stdio.h>

int main() {

    int matriz[5][5];
    int linha, coluna;

    // Preencher a matriz
    for (linha = 0; linha < 5; linha++) {

        for (coluna = 0; coluna < 5; coluna++) {

            if (linha == coluna) {
                matriz[linha][coluna] = 1;
            } else {
                matriz[linha][coluna] = 0;
            }
        }
    }

    // Mostrar a matriz
    printf("Matriz identidade:\n\n");

    for (linha = 0; linha < 5; linha++) {

        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d\t", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}