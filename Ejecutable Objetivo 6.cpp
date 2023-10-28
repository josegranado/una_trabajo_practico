#include <iostream>
#include <algorithm>

using namespace std;

// Funci�n para imprimir la matriz
void imprimirMatriz(char matriz[][20]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

// Funci�n para ordenar la matriz seg�n su c�digo ASCII
void ordenarMatriz(char matriz[][20]) {
    // Convertir la matriz en un arreglo unidimensional
    char arreglo[400];
    int k = 0;
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            arreglo[k++] = matriz[i][j];
        }
    }

    // Ordenar el arreglo utilizando la funci�n sort de la biblioteca est�ndar
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
    // Declarar y llenar la matriz con letras may�sculas y min�sculas
    cout << "----------------------------------------------" << endl;
    cout << "  PROGRAMA:324 Computaci�n II Objetivo 6 Algoritmos de Ordenaci�n" << endl;
    cout << "  AUTOR: Jos� Alfonso Granado C.I.N� 26.272.914" << endl;
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
