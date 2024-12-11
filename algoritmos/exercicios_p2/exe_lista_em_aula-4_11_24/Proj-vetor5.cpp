// Exercício 2, da lista de 4 exercicios em aula, algoritimo de saída de ordem invertida.
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    // Declarando o vetor de 5 posições
    int vetor[5];
    
    // pergunte ao usuário os 5 números.
    for (int contador = 0; contador < 5; contador++) {
        cout << "Informe um número: (Máx 5 vezes)";
        cin >> vetor[contador];
    }

    // Saída de valores em ordem invertida
    cout << "Valores em ordem invertida: ";
    for (int i = 7; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    
    return 0;
}
