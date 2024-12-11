//Lista 3-exercicío 8, funções.
#include <iostream>
#include <locale>

using namespace std;

// Função para verificar se o número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false; // Encontrou um divisor, não é primo
        }
    }

    return true; // Nenhum divisor encontrado, é primo
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    // Entrada do número
    cout << "Digite um número inteiro e positivo: ";
    cin >> numero;

    // Verifica se o número é positivo
    if (numero < 0) {
        cout << "O número deve ser positivo!" << endl;
        return 1; // Finaliza o programa com erro
    }

    // Chamada da função e exibição do resultado
    if (ehPrimo(numero)) {
        cout << "O número " << numero << " é primo." << endl;
    } else {
        cout << "O número " << numero << " não é primo." << endl;
    }

    return 0;
}
