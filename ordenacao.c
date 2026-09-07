-+*#include <stdio.h>

int main() {

    int numeros[10] = {8, 3, 7, 1, 9, 2, 10, 5, 4, 6};

    int i;
    int j;
    int temp;

    printf("Lista inicial:\n");

    for (i = 0; i < 10; i++) {
        printf("%d\t", numeros[i]);
    }

    printf("\n\n");


    // ORDEM CRESCENTE

    printf("Ordenacao crescente:\n");

    for (i = 0; i < 9; i++) {

        for (j = 0; j < 9 - i; j++) {

            if (numeros[j] > numeros[j + 1]) {

                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;

                for (int k = 0; k < 10; k++) {
                    printf("%d\t", numeros[k]);
                }

                printf("\n");
            }
        }
    }

    printf("\nLista ordenada em ordem crescente:\n");

    for (i = 0; i < 10; i++) {
        printf("%d\t", numeros[i]);
    }

    printf("\n\n");


    // ORDEM DECRESCENTE

    printf("Ordenacao decrescente:\n");

    for (i = 0; i < 9; i++) {

        for (j = 0; j < 9 - i; j++) {

            if (numeros[j] < numeros[j + 1]) {

                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;

                for (int k = 0; k < 10; k++) {
                    printf("%d\t", numeros[k]);
                }

                printf("\n");
            }
        }
    }

    printf("\nLista ordenada em ordem decrescente:\n");

    for (i = 0; i < 10; i++) {
        printf("%d\t", numeros[i]);
    }

    printf("\n");

    return 0;
}
