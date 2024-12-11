#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // Definição das matrizes A e B
    int A[5][5], B[5][5];

    // Leitura dos elementos da matriz A
    cout << "Digite os elementos da matriz A (5x5):" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Elemento A[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> A[i][j];
        }
    }

    // Construção da matriz B
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                // Elementos na diagonal principal
                B[i][j] = A[i][j] * 3;
            } else {
                // Demais elementos
                B[i][j] = A[i][j] * 2;
            }
        }
    }

    // Exibição da matriz B
    cout << "\nMatriz B:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
