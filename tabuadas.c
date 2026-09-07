#include <stdio.h>

int main() {

    int tabuada;
    int multiplicador;

    for (tabuada = 2; tabuada <= 10; tabuada++) {

        printf("Tabuada do %d\n", tabuada);

        for (multiplicador = 1; multiplicador <= 10; multiplicador++) {

            printf("%d x %d = %d\n",
                   tabuada,
                   multiplicador,
                   tabuada * multiplicador);
        }

        printf("\n");
    }

    return 0;
}