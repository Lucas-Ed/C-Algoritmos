//Lista 3-exercicío 4, Ordenação modo decrescente.
#include <iostream>
#include<locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    // Declarando o vetor com 2 elementos
    int vetor[2];

    // Solicitando os valores ao usuário
    cout << "Digite o primeiro número: ";
    cin >> vetor[0];

    cout << "Digite o segundo número: ";
    cin >> vetor[1];

    // Ordenando o vetor de forma crescente
    if (vetor[0] > vetor[1]) {
        // Troca os valores
        int temp = vetor[0];
        vetor[0] = vetor[1];
        vetor[1] = temp;
    }

    // Exibindo o vetor ordenado
    cout << "Vetor ordenado de forma crescente: " << vetor[0] << ", " << vetor[1] << endl;

    return 0;
}
