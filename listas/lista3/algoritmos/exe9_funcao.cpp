//Lista 3-exercicío 9, funções.
#include <iostream>
#include <locale>

using namespace std;

// Função para verificar se um número é perfeito
bool ehPerfeito(int numero) {
    if (numero <= 0) {
        return false; // Números não positivos não são perfeitos
    }

    int somaDivisores = 0;

    // Calcula a soma dos divisores exceto o próprio número
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Retorna true se a soma dos divisores for igual ao número
    return somaDivisores == numero;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    // Entrada do número
    cout << "Digite um número inteiro e positivo: ";
    cin >> numero;

    // Verifica se o número é positivo
    if (numero <= 0) {
        cout << "O número deve ser positivo!" << endl;
        return 1; // Finaliza o programa com erro
    }

    // Chamada da função e exibição do resultado
    if (ehPerfeito(numero)) {
        cout << "O número " << numero << " é perfeito." << endl;
    } else {
        cout << "O número " << numero << " não é perfeito." << endl;
    }

    return 0;
}
