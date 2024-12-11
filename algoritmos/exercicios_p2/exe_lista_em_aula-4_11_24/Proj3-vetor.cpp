// Exercício 3, de 4 exercicíos em aula, algoritmo de saída de ordem inversa de valores do vetor.
#include <iostream>
#include <locale>
#include <algorithm> // Inclua este cabeçalho para usar std::find

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    // Declarando variáveis.
    int numeros[] = {3, 8, 1, 5, 9, 2, 7, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int alvo; // valor a ser buscado
    
    // Solicitando ao usuário o número a ser buscado
    cout << "Informe o número que deseja procurar no vetor: ";
    cin >> alvo;
    
    // Usando std::find
    int * posicao = find(numeros, numeros + tamanho, alvo);

    if (posicao != numeros + tamanho) {
        cout << "Valor " << alvo << " encontrado na posição " << (posicao - numeros) << endl;
    } else {
        cout << "Valor " << alvo << " não encontrado no vetor." << endl;
    }
}

