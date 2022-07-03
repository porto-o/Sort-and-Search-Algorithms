#include "stdio.h"

int ordBurbuja(int numeros[], int n);

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

    ordBurbuja(numeros, n);


    return 0;
}

int ordBurbuja(int numeros[], int n)
{
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if(numeros[i] > numeros[j])
            {
                int temp = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = temp;
            }
        }
    }

    printf("\nArray ordenado por burbuja: ");
    for (int i = 0; i < n; ++i) {
        printf("%i,",numeros[i]);
    }

    return 0;

}