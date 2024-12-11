// Exercicio lista2- exe 2 tabuleiro de xadrez e gr�o de trigo.
#include <iostream>
#include <cmath> // Para o c�lculo de pot�ncias
using namespace std;

int main() {
    unsigned long long totalGraos = 0; // Vari�vel para armazenar a somat�ria de gr�os
    unsigned long long graosNaCasa = 1; // Inicia com 1 gr�o na primeira casa

    // Itera pelas 64 casas do tabuleiro
    for (int casa = 1; casa <= 64; ++casa) {
        totalGraos += graosNaCasa; // Adiciona o n�mero de gr�os da casa atual ao total
        cout << "Casa " << casa << ": " << graosNaCasa << " gr�os, Somat�ria parcial: " << totalGraos << endl;
        graosNaCasa *= 2; // Dobra o n�mero de gr�os para a pr�xima casa
    }

    // Exibe o total de gr�os ap�s as 64 casas
    cout << "\nTotal de gr�os no tabuleiro de xadrez: " << totalGraos << " gr�os" << endl;
    return 0;
}
