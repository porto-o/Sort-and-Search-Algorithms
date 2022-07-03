#include "stdio.h"

int ordSeleccion(int numeros[],int n);

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

    printf("\nArray desordenado: ");
    for (int i = 0; i < n; ++i) {
        printf("%d,",numeros[i]);
    }

    ordSeleccion(numeros,n);

    return 0;
}

int ordSeleccion(int numeros[], int n)
{
    // Buscar el menor e intercambiar por el A[0]...A[N-1]
    int indiceMenor;
    for (int i = 0; i < n-1; ++i) {
        indiceMenor = i;    // Tomamos el primero elemento por default como el menor
        for (int j = i+1; j < n; ++j) { // Recorremos a partir de la siguiente posicion la lista desordenada
            if(numeros[j] < numeros[indiceMenor])   // El elemento en la lista desordenada es menor al de la lista ordenada?
            {
                indiceMenor = j;    // Se intercambia el índice del menor
                if(i != indiceMenor)
                {
                    int aux = numeros[i];
                    numeros[i] = numeros[indiceMenor];
                    numeros[indiceMenor] = aux;
                }
            }
        }
    }


    printf("\nArray ordenado: ");
    for (int i = 0; i < n; ++i) {
        printf("%i,",numeros[i]);
    }

    return 0;
}