#include <stdio.h>
#include "funciones.h"

// Función para escanear productos
int scan_produ(char m[][30], int i) {
    printf("Introduce el nombre del producto %d: ", i + 1);
    fgets(m[i], 30, stdin);  // Capturar el nombre del producto
    return 0;
}

// Función para escanear precios
int scan_precio(int m[], int i) {
    printf("Introduce el precio del producto %d: ", i + 1);
    scanf("%d", &m[i]);  // Capturar el precio del producto
    getchar(); // Limpiar el buffer
    return 0;
}

// Función que suma los precios
int sumarMatriz(int m[], int tamaño) {
    int suma = 0;
    for (int i = 0; i < tamaño; i++) {
        suma += m[i];
    }
    return suma;
}

// Función que calcula el promedio
int promeMatriz(int m[], int tamaño) {
    int suma = sumarMatriz(m, tamaño);
    return suma / tamaño;
}

// Función que encuentra el precio máximo
int ValorMaxMatriz(int m[], int tamaño) {
    int premax = m[0];
    for (int i = 1; i < tamaño; i++) {
        if (m[i] > premax) {
            premax = m[i];
        }
    }
    return premax;
}

// Función que encuentra el precio mínimo
int ValorMinMatriz(int m[], int tamaño) {
    int premin = m[0];
    for (int i = 1; i < tamaño; i++) {
        if (m[i] < premin) {
            premin = m[i];
        }
    }
    return premin;
}
