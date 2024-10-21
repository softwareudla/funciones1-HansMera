#include <stdio.h>
#include <string.h>  // Librería para strcmp
#include "funciones.h"

int main() {
    int precios[10] = {0};  // Arreglo de precios
    char productos[10][30]; // Arreglo de nombres de productos
    char buscar[30];        // Cadena para buscar producto
    int cont = 0, menu1 = 0, opcion = 0, result = 0, i=0;
    int cambiarprod = 0, cambiarpre = 0;

    // Ingreso de productos y precios
    for (int i = 0; i < 10; i++) {
        scan_produ(productos, i);
        scan_precio(precios, i);
    }

    // Menú de opciones
    do {
        printf("\n¿Qué deseas hacer ahora?\n");
        printf("1. Cambiar el nombre de un producto\n");
        printf("2. Cambiar el precio de un producto\n");
        printf("3. Sacar el valor total de los precios\n");
        printf("4. Sacar el valor promedio de los precios\n");
        printf("5. Conocer el precio más alto\n");
        printf("6. Conocer el precio más bajo\n");
        printf("7. Buscar un producto\n");
        printf("8. Salir\n");
        scanf("%d", &opcion);
        getchar(); // Limpiar el buffer

        switch (opcion) {
        case 1:
            printf("¿De qué número de producto deseas cambiar el nombre? (1-10): ");
            scanf("%d", &cambiarprod);
            getchar(); // Limpiar el buffer
            if (cambiarprod >= 1 && cambiarprod <= 10) {
                scan_produ(productos, cambiarprod - 1);
            } else {
                printf("Número de producto inválido.\n");
            }
            break;
        case 2:
            printf("¿De qué número de producto deseas cambiar el precio? (1-10): ");
            scanf("%d", &cambiarpre);
            getchar(); // Limpiar el buffer
            if (cambiarpre >= 1 && cambiarpre <= 10) {
                scan_precio(precios, cambiarpre - 1);
            } else {
                printf("Número de producto inválido.\n");
            }
            break;
        case 3:
            result = sumarMatriz(precios, 10);
            printf("El precio total de tus productos es %d\n", result);
            break;
        case 4:
            result = promeMatriz(precios, 10);
            printf("El precio promedio de tus productos es %d\n", result);
            break;
        case 5:
            result = ValorMaxMatriz(precios, 10);
            printf("El precio más alto de tus productos es %d\n", result);
            break;
        case 6:
            result = ValorMinMatriz(precios, 10);
            printf("El precio más bajo de tus productos es %d\n", result);
            break;
        case 7:
            buscarProducto(&productos[i],&precios[i],&buscar[i],i );
                    break;  // Salir del ciclo al encontrar el producto
            break;
        case 8:
            printf("Saliendo del programa\n");
            break;
        default:
            printf("Opción no válida.\n");
            break;
        }
    } while (opcion != 8);

    return 0;
}
