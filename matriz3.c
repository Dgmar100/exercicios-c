#include <stdio.h>

int main() {

    char matriz[5][5];
    int linha, coluna;

    for (linha = 0; linha < 5; linha++) {

        for (coluna = 0; coluna < 5; coluna++) {

            if (linha == 2 && coluna == 2) {
                matriz[linha][coluna] = 'X';
            }
            else if (linha == coluna) {
                matriz[linha][coluna] = '1';
            }
            else if (linha + coluna == 4) {
                matriz[linha][coluna] = '2';
            }
            else {
                matriz[linha][coluna] = '0';
            }
        }
    }

    printf("Matriz:\n\n");

    for (linha = 0; linha < 5; linha++) {

        for (coluna = 0; coluna < 5; coluna++) {
            printf("%c\t", matriz[linha][coluna]);
        }

        printf("\n");
    }

    return 0;
}