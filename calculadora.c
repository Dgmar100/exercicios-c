#include <stdio.h>
void mostrarMenu()
{
    printf("\n---CAUCULADORA---\n");
    printf("1-Somar\n");
    printf("2-Subtrair\n");
    printf("-3 Multiplicar-\n");
    printf("4-Dividri-\n");
}
int somar(int a, int b)
{
    return a + b;
}

int subtrair(int a, int b)
{
    return a - b;
}
int multiplicar(int a, int b)
{
    return a * b;
}
int dividir(int a, int b)
{
    return a / b;
}
int main()
{
    int numero1, numero2;
    int opcao;
    int resultado;

    printf("introduza primeiro numero:");
    scanf("%d", &numero1);

    printf("introduza primeiro numero:");
    scanf("%d", &numero2);

    void mostrarMenu();

    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1)

    {
        resultado = somar(numero1, numero2);
        printf("Rultado: %d\n", resultado);
    }

    if (opcao == 2)
    {
        resultado = subtrair(numero1, numero2);
        printf("Resultado: %d\n", resultado);
    }

    if (opcao == 3)
    {
        resultado = multiplicar(numero1, numero2);
        printf("Resulta:%d\n", resultado);
    }
    if (opcao == 4)
    {
        if (numero2 != 0)
        {
        resultado = dividir(numero1,numero2);
        printf("Resultado:%d\n",resultado);
        }
       else
       {
        printf("Não é possivel dividir por zero.\n");
       }
    }
  return 0;  
}

