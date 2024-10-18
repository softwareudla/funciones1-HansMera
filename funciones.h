#ifndef FUNCIONES_H
#define FUNCIONES_H

int scan_produ(char m[][30], int i);    // Corregido para manejar matrices 2D
int scan_precio(int m[], int i);
int control_inicio(int m);
int control_precio(int m);
int sumarMatriz(int m[], int tamaño);
int promeMatriz(int m[], int tamaño);
int ValorMaxMatriz(int m[], int tamaño);
int ValorMinMatriz(int m[], int tamaño);
void buscarProducto (char produ[][30], int precio [], char productobuscar [50], int i);

#endif