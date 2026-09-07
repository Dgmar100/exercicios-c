#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeros[10000];
    int i, j, temp;
    int procurado;
    int limite_inferior;
    int limite_superior;
    int meio;
    int encontrado = 0;
    int ciclos = 0;

    // Gerar 10000 números aleatórios
    srand(time(NULL));

    for (i = 0; i < 10000; i++) {
        numeros[i] = rand() % 10001;
    }

    // Ordenar o array por ordem crescente
    // Não fazemos printf durante a ordenação
    for (i = 0; i < 9999; i++) {

        for (j = 0; j < 9999 - i; j++) {

            if (numeros[j] > numeros[j + 1]) {

                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Perguntar o número a procurar
    printf("Qual o numero a procurar? ");
    scanf("%d", &procurado);

    // Pesquisa binária
    limite_inferior = 0;
    limite_superior = 9999;

    while (limite_inferior <= limite_superior) {

        ciclos++;

        meio = (limite_inferior + limite_superior) / 2;

        if (numeros[meio] == procurado) {

            printf("Numero %d encontrado na posicao %d.\n",
                   procurado, meio);

            encontrado = 1;
            break;

        } else if (procurado < numeros[meio]) {

            limite_superior = meio - 1;

        } else {

            limite_inferior = meio + 1;
        }
    }

    if (encontrado == 0) {
        printf("O numero %d nao existe na lista.\n", procurado);
    }

    printf("Numero de ciclos de pesquisa: %d\n", ciclos);

    return 0;
}