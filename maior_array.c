#include <stdio.h>

int posicaoMaior(int numeros[], int tamanho)
{
    int posicao = 0;

    for (int i = 1; i < tamanho; i++)
    {
        if (numeros[i] > numeros[posicao])
        {
            posicao = i;
        }
    }

    return posicao;
}

int main()
{
    int numeros[5] = {10, 25, 7, 40, 15};

    int posicao;

    posicao = posicaoMaior(numeros, 5);

    printf("A posicao do maior valor e: %d\n", posicao);
    printf("O maior valor e: %d\n", numeros[posicao]);

    return 0;
}