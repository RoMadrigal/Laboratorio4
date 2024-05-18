
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


