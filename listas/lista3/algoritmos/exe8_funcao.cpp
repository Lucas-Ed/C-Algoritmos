//Lista 3-exercic�o 8, fun��es.
#include <iostream>
#include <locale>

using namespace std;

// Fun��o para verificar se o n�mero � primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false; // N�meros menores ou iguais a 1 n�o s�o primos
    }

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false; // Encontrou um divisor, n�o � primo
        }
    }

    return true; // Nenhum divisor encontrado, � primo
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    // Entrada do n�mero
    cout << "Digite um n�mero inteiro e positivo: ";
    cin >> numero;

    // Verifica se o n�mero � positivo
    if (numero < 0) {
        cout << "O n�mero deve ser positivo!" << endl;
        return 1; // Finaliza o programa com erro
    }

    // Chamada da fun��o e exibi��o do resultado
    if (ehPrimo(numero)) {
        cout << "O n�mero " << numero << " � primo." << endl;
    } else {
        cout << "O n�mero " << numero << " n�o � primo." << endl;
    }

    return 0;
}
