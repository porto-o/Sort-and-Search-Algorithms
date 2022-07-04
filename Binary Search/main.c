#include "stdio.h"

int ordBurbuja(int numeros[], int n);
int busquedaBinaria(int numeros[], int n, int clave);

int main()
{
    int n,elemento, clave;
    int numeros[n];

    printf("\nNumero de elementos a insertar: ");
    scanf("%i",&n);

    for (int i = 0; i <= n-1; ++i) {
        printf("\nElemento: ");
        scanf("%i",&elemento);
        numeros[i] = elemento;
    }

    ordBurbuja(numeros, n);

    for (int i = 0; i < n; ++i) {
        printf("%i,",numeros[i]);
    }

    printf("\nElemento a buscar: ");
    scanf("%i", &clave);

    busquedaBinaria(numeros, n, clave);

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
    return 0;
}
int busquedaBinaria(int numeros[], int n, int clave)
{
    int mitad;
    int inicio = 0;
    int final = n-1;

    while(inicio <= final)
    {
        mitad = (int)((inicio + final) / 2);
        if(numeros[mitad] == clave) // La clave es mayor
        {
            printf("El elemento %i si esta dentro de a lista",clave);
            return 1;
        }
        else if(numeros[mitad] > clave)
        {
            final = mitad - 1;
        }
        else
        {
            inicio = mitad + 1;
        }
    }

    printf("El elemento no esta dentro de la lista");
    return -1;
}