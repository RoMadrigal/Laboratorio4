
#include <stdio.h>

int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};

#define ARR_SIZE (sizeof(arreglo) / sizeof(arreglo[0]))



int encontrarMin(int arr[], int longitud) {
    int minimo = arr[0];
    for (int i = 1; i < longitud; i++) {
        if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }
    return minimo;
}



int encontrarMax(int arr[], int longitud) {
    int maximo = arr[0];
    for (int i = 1; i < longitud; i++) {
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
    }
    return maximo;
}



void encontrarMinMax(int *arreglo, int *minimo, int *maximo, int longitud) {
    *minimo = arreglo[0];
    *maximo = arreglo[0];
    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i];
        }
        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i];
        }
    }
}



int main() {
    int minimo = encontrarMin(arreglo, ARR_SIZE);
    int maximo = encontrarMax(arreglo, ARR_SIZE);


    printf("El valor minimo en el arreglo es: %d\n", minimo);
    printf("El valor maximo en el arreglo es: %d\n", maximo);


    int min, max;
    encontrarMinMax(arreglo, &min, &max, ARR_SIZE);


    printf("Utilizando punteros, el valor minimo en el arreglo es: %d\n", min);
    printf("Utilizando punteros, el valor maximo en el arreglo es: %d\n", max);


    return 0;
}


