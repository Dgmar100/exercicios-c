#include <stdio.h>

int main() {

    int matriz1[3][4];
    int matriz2[3][4];
    int linha, coluna;
    int valor = 3;

    // Preencher a primeira matriz
    for (linha = 0; linha < 3; linha++) {

        for (coluna = 0; coluna < 4; coluna++) {

            matriz1[linha][coluna] = valor;

            valor = valor + 3;
        }
    }

    // Preencher a segunda matriz com o dobro
    for (linha = 0; linha < 3; linha++) {

        for (coluna = 0; coluna < 4; coluna++) {

            matriz2[linha][coluna] = matriz1[linha][coluna] * 2;
        }
    }

    // Mostrar a primeira matriz
    printf("Primeira matriz:\n");

    for (linha = 0; linha < 3; linha++) {

        for (coluna = 0; coluna < 4; coluna++) {
            printf("%d\t", matriz1[linha][coluna]);
        }

        printf("\n");
    }

    // Mostrar a segunda matriz
    printf("\nSegunda matriz (dobro):\n");

    for (linha = 0; linha < 3; linha++) {

        for (coluna = 0; coluna < 4; coluna++) {
            printf("%d\t", matriz2[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}