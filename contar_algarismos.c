#include <stdio.h>

int contarAlgarismos(int numero)
{
    int contador = 0;

    if (numero == 0)
    {
        return 1;
    }

    while (numero != 0)
    {
        numero = numero / 10;
        contador++;
    }

    return contador;
}

int main()
{
    int numero;
    int resultado;

    printf("Introduza um numero: ");
    scanf("%d", &numero);

    resultado = contarAlgarismos(numero);

    printf("O numero tem %d algarismos.\n", resultado);

    return 0;
}