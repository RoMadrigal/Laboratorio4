
#include <stdio.h>

int arreglo[] = {2, 4, 6, 23, 56, 79};

#define ARR_SIZE (sizeof(arreglo) / sizeof(arreglo[0]))


int busquedaLineal(int valor) {
    for (int i = 0; i < ARR_SIZE; i++) {
        if (arreglo[i] == valor) {
            return i;
        }
    }
    return -1;
}


int busquedaBinaria(int valor) {
    int inicio = 0;
    int fin = ARR_SIZE - 1;

    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;


        if (arreglo[medio] == valor) {
            return medio;
        }
        if (arreglo[medio] < valor) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1;
}



int busquedaBinariaRecursiva(int valor, int inicio, int fin) {
    if (inicio > fin) {
        return -1;
    }

    int medio = inicio + (fin - inicio) / 2;

    if (arreglo[medio] == valor) {
        return medio;
    }
    if (arreglo[medio] < valor) {
        return busquedaBinariaRecursiva(valor, medio + 1, fin);
    }
    return busquedaBinariaRecursiva(valor, inicio, medio - 1);
}



int main() {
    int valor;
    printf("Ingrese un valor entero: ");
    scanf("%d", &valor);


    int posicionLineal = busquedaLineal(valor);
    if (posicionLineal != -1) {
        printf("Busqueda lineal: El valor %d se encuentra en la posicion %d del arreglo.\n", valor, posicionLineal);
    } else {
        printf("Busqueda lineal: El valor %d no fue encontrado en el arreglo.\n", valor);
    }


    int posicionBinaria = busquedaBinaria(valor);
    if (posicionBinaria != -1) {
        printf("Busqueda binaria: El valor %d se encuentra en la posicion %d del arreglo.\n", valor, posicionBinaria);
    } else {
        printf("Busqueda binaria: El valor %d no fue encontrado en el arreglo.\n", valor);
    }


    int posicionBinariaRecursiva = busquedaBinariaRecursiva(valor, 0, ARR_SIZE - 1);
    if (posicionBinariaRecursiva != -1) {
        printf("Busqueda binaria recursiva: El valor %d se encuentra en la posicion %d del arreglo.\n", valor, posicionBinariaRecursiva);
    } else {
        printf("Busqueda binaria recursiva: El valor %d no fue encontrado en el arreglo.\n", valor);
    }


    return 0;
}


