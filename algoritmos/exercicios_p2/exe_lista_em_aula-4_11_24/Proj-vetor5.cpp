// Exerc�cio 2, da lista de 4 exercicios em aula, algoritimo de sa�da de ordem invertida.
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    // Declarando o vetor de 5 posi��es
    int vetor[5];
    
    // pergunte ao usu�rio os 5 n�meros.
    for (int contador = 0; contador < 5; contador++) {
        cout << "Informe um n�mero: (M�x 5 vezes)";
        cin >> vetor[contador];
    }

    // Sa�da de valores em ordem invertida
    cout << "Valores em ordem invertida: ";
    for (int i = 7; i >= 0; i--) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    
    return 0;
}
