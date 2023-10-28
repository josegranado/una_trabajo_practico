#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para llenar una matriz con valores aleatorios
void llenarMatriz(int matriz[][100], int n, int m) {
    srand(time(NULL)); // Inicializar la semilla para generar números aleatorios

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matriz[i][j] = rand() % 101; // Generar un número aleatorio entre 0 y 100
        }
    }
}

// Función para contar cuántos valores pares hay en una matriz
int contarPares(int matriz[][100], int n, int m) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] % 2 == 0) {
                contador++;
            }
        }
    }

    return contador;
}

// Función para contar cuántos valores mayores a cero hay en una matriz
int contarMayoresACero(int matriz[][100], int n, int m) {
    int contador = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matriz[i][j] > 0) {
                contador++;
            }
        }
    }

    return contador;
}

int main() {
    int n, m;
    int matriz1[100][100], matriz2[100][100];

    cout << "Ingrese el tamaño de la matriz (filas y columnas): ";
    cin >> n >> m;

    llenarMatriz(matriz1, n, m);
    llenarMatriz(matriz2, n, m);

    cout << endl << "Matriz 1:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << "Matriz 2:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }

    int pares1 = contarPares(matriz1, n, m);
    int pares2 = contarPares(matriz2, n, m);
    int mayores1 = contarMayoresACero(matriz1, n, m);
    int mayores2 = contarMayoresACero(matriz2, n, m);

    cout << endl << "En la matriz 1 hay " << pares1 << " valores pares y " << mayores1 << " valores mayores a cero." << endl;
    cout << "En la matriz 2 hay " << pares2 << " valores pares y " << mayores2 << " valores mayores a cero." << endl;

    return 0;
}
