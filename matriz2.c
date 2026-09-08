#include <stdio.h>

int main() {

    char matriz[5][5];
    int linha, coluna;

    // Preencher a matriz
    for (linha = 0; linha < 5; linha++) {

        for (coluna = 0; coluna < 5; coluna++) {

            if (linha + coluna > 4) {
                matriz[linha][coluna] = 'X';
            } else {
                matriz[linha][coluna] = ' ';
            }
        }
    }

    // Mostrar a matriz
    printf("Matriz:\n\n");

    for (linha = 0; linha < 5; linha++) {

        for (coluna = 0; coluna < 5; coluna++) {
            printf("%c\t", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}