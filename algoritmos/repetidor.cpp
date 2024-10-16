#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    int vezes;  // Para armazenar quantas vezes o nome será exibido
    string nome;

    // Pergunta ao usuário quantas vezes exibir o nome
    cout << "Quantas vezes deve mostrar o nome?\n";
    cin >> vezes;

    // Pergunta o nome do usuário
    cout << "Digite seu nome\n";
    cin >> nome;

    // Usa um loop 'while' para mostrar o nome a quantidade de vezes informada
    while (contador < vezes) {
        cout << nome << endl;
        contador++;
    }

    return 0;
}
