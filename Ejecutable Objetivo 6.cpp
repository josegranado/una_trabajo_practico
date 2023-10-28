#include <iostream>
#include <algorithm>

using namespace std;

// Función para imprimir la matriz
void imprimirMatriz(char matriz[][20]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Función para ordenar la matriz según su código ASCII
void ordenarMatriz(char matriz[][20]) {
    // Convertir la matriz en un arreglo unidimensional
    char arreglo[400];
    int k = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            arreglo[k++] = matriz[i][j];
        }
    }

    // Ordenar el arreglo utilizando la función sort de la biblioteca estándar
    sort(arreglo, arreglo + 400);

    // Actualizar la matriz con los elementos ordenados
    k = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            matriz[i][j] = arreglo[k++];
        }
    }
}

int main() {
    // Declarar y llenar la matriz con letras mayúsculas y minúsculas
    cout << "----------------------------------------------" << endl;
    cout << "  PROGRAMA:324 Computación II Objetivo 6 Algoritmos de Ordenación" << endl;
    cout << "  AUTOR: José Alfonso Granado C.I.Nº 26.272.914" << endl;
    cout << "----------------------------------------------" << endl;
    char matriz[20][20] = {
        {'A', 'b', 'C', 'd', 'E', 'f', 'G', 'h', 'I', 'j', 'K', 'l', 'M', 'n', 'O', 'p', 'Q', 'r', 'S', 't'},
        {'U', 'v', 'W', 'x', 'Y', 'Z', 'a', 'B', 'c', 'D', 'e', 'F', 'g', 'H', 'i', 'J', 'k', 'L', 'm', 'N'},
        {'o', 'P', 'q', 'R', 's', 'T', 'u', 'V', 'w', 'X', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
        {'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b'},
        {'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v'},
        {'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'},
        {'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'},
        {'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D'},
        {'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X'},
        {'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r'},
        {'s', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L'},
        {'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f'},
        {'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'},
        {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'},
        {'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n'},
        {'O', 'p', 'Q', 'r', 'S', 't', 'u', 'V', 'w', 'X', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'},
        {'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b'},
        {'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v'},
        {'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P'},
        {'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}
    };

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz);

    ordenarMatriz(matriz);

    cout << endl << "Matriz ordenada:" << endl;
    imprimirMatriz(matriz);

    return 0;
}
