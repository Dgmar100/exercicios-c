#include <stdio.h>

int procurarNumero(int numeros[], int tamanho, int valor)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (numeros[i] == valor)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int numeros[5] = {10, 20, 30, 40, 50};

    int valor;
    int posicao;

    printf("Introduza o numero que deseja procurar: ");
    scanf("%d", &valor);

    posicao = procurarNumero(numeros, 5, valor);

    if (posicao != -1)
    {
        printf("Numero encontrado na posicao %d.\n", posicao);
    }
    else
    {
        printf("Numero nao encontrado.\n");
    }

    return 0;
}