#include <stdio.h>

int main() {

    int matriz[6][5];
    int linha, coluna;
    int soma;

    // Preencher a primeira linha
    for (coluna = 0; coluna < 5; coluna++) {
        matriz[0][coluna] = coluna + 1;
    }

    // Cada linha recebe o dobro da linha anterior
    for (linha = 1; linha < 6; linha++) {

        for (coluna = 0; coluna < 5; coluna++) {

            matriz[linha][coluna] =
                matriz[linha - 1][coluna] * 2;
        }
    }

    // Mostrar a matriz
    printf("Matriz:\n\n");

    for (linha = 0; linha < 6; linha++) {

        for (coluna = 0; coluna < 5; coluna++) {
            printf("%d\t", matriz[linha][coluna]);
        }

        printf("\n");
    }

    // Calcular a soma de cada coluna
    printf("\nSoma das colunas:\n");

    for (coluna = 0; coluna < 5; coluna++) {

        soma = 0;

        for (linha = 0; linha < 6; linha++) {
            soma = soma + matriz[linha][coluna];
        }

        printf("Coluna %d: %d\n", coluna + 1, soma);
    }

    return 0;
}