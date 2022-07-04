#include "stdio.h"

int mergeDividir(int numeros[],int inicio, int final);

/**
 * Tendremos 2 funciones
 * Funcion 1: Aplicara principio de dividir hasta el caso base
 * Funcion 2: Mezclara de forma ordenada
 * */


int main()
{
    int n,elemento;
    int numeros[n];

    printf("\nNumero de elementos a insertar: ");
    scanf("%i",&n);

    for (int i = 0; i <= n-1; ++i) {
        printf("\nElemento: ");
        scanf("%i",&elemento);
        numeros[i] = elemento;
    }

    mergeDividir(numeros, inicio, final);

    return 0;
}

int mergeDividir(int numeros[], int inicio, int final)
{

}