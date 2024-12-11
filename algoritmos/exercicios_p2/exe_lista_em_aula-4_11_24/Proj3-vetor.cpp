// Exerc�cio 3, de 4 exercic�os em aula, algoritmo de sa�da de ordem inversa de valores do vetor.
#include <iostream>
#include <locale>
#include <algorithm> // Inclua este cabe�alho para usar std::find

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    // Declarando vari�veis.
    int numeros[] = {3, 8, 1, 5, 9, 2, 7, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int alvo; // valor a ser buscado
    
    // Solicitando ao usu�rio o n�mero a ser buscado
    cout << "Informe o n�mero que deseja procurar no vetor: ";
    cin >> alvo;
    
    // Usando std::find
    int * posicao = find(numeros, numeros + tamanho, alvo);

    if (posicao != numeros + tamanho) {
        cout << "Valor " << alvo << " encontrado na posi��o " << (posicao - numeros) << endl;
    } else {
        cout << "Valor " << alvo << " n�o encontrado no vetor." << endl;
    }
}

