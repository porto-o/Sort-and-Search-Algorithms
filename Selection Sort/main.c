#include "stdio.h"

int ordSeleccion(int numeros[],int n);

int main()
{
    int n=0;
    int numeros[n], elemento;

    printf("\nNumero de elementos a insertar: ");
    scanf("%i",&n);

    for (int i = 0; i <= n-1; ++i) {
        printf("\nElemento: ");
        scanf("%i",&elemento);
        numeros[i] = elemento;
    }

    printf("\nArray desordenado: ");
    for (int i = 0; i < n; ++i) {
        printf("%i,",numeros[i]);
    }

    ordSeleccion(numeros,n);

    return 0;
}

int ordSeleccion(int numeros[], int n)
{
    // Buscar el menor e intercambiar por el A[0]...A[N-1]
    int indiceMenor;
    for (int i = 0; i < n-1; ++i) {
        indiceMenor = i;
        for (int j = i+1; j < n; ++j) {
            if(numeros[j] < numeros[indiceMenor])
            {
                indiceMenor = j;
                if(i != indiceMenor)
                {
                    double aux = numeros[i];
                    numeros[i] = numeros[indiceMenor];
                    numeros[indiceMenor] = (int)aux;
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