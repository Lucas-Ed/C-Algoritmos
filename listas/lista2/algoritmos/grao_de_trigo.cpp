// Exercicio lista2- exe 2 tabuleiro de xadrez e grão de trigo.
#include <iostream>
#include <cmath> // Para o cálculo de potências
using namespace std;

int main() {
    unsigned long long totalGraos = 0; // Variável para armazenar a somatória de grãos
    unsigned long long graosNaCasa = 1; // Inicia com 1 grão na primeira casa

    // Itera pelas 64 casas do tabuleiro
    for (int casa = 1; casa <= 64; ++casa) {
        totalGraos += graosNaCasa; // Adiciona o número de grãos da casa atual ao total
        cout << "Casa " << casa << ": " << graosNaCasa << " grãos, Somatória parcial: " << totalGraos << endl;
        graosNaCasa *= 2; // Dobra o número de grãos para a próxima casa
    }

    // Exibe o total de grãos após as 64 casas
    cout << "\nTotal de grãos no tabuleiro de xadrez: " << totalGraos << " grãos" << endl;
    return 0;
}
