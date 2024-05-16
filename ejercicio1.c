
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


