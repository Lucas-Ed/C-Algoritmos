// Exercício 4, de 4 exercicíos em aula, algoritmo de soma de dois vetores em um terceiro vetor.
#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

    setlocale(LC_ALL, "Portuguese");
    // Declaramos os dois vetores de entrada e o vetor de resultado
    int vetor1[6] = {1, 2, 3, 4, 5, 6};  // Exemplo de valores para o primeiro vetor
    int vetor2[6] = {6, 5, 4, 3, 2, 1};  // Exemplo de valores para o segundo vetor
    int soma[6]; // Vetor para armazenar o resultado da soma

    // Loop para somar cada elemento dos dois vetores
    for (int i = 0; i < 6; i++) {
        soma[i] = vetor1[i] + vetor2[i];
    }

    // Exibir o resultado
    cout << "Resultado da soma dos vetores: ";
    for (int i = 0; i < 6; i++) {
        cout << soma[i] << " ";
    }
    cout << endl;

	return 0;
}
