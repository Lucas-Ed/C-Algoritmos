//Lista 3-exercic�o 9, fun��es.
#include <iostream>
#include <locale>

using namespace std;

// Fun��o para verificar se um n�mero � perfeito
bool ehPerfeito(int numero) {
    if (numero <= 0) {
        return false; // N�meros n�o positivos n�o s�o perfeitos
    }

    int somaDivisores = 0;

    // Calcula a soma dos divisores exceto o pr�prio n�mero
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Retorna true se a soma dos divisores for igual ao n�mero
    return somaDivisores == numero;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    // Entrada do n�mero
    cout << "Digite um n�mero inteiro e positivo: ";
    cin >> numero;

    // Verifica se o n�mero � positivo
    if (numero <= 0) {
        cout << "O n�mero deve ser positivo!" << endl;
        return 1; // Finaliza o programa com erro
    }

    // Chamada da fun��o e exibi��o do resultado
    if (ehPerfeito(numero)) {
        cout << "O n�mero " << numero << " � perfeito." << endl;
    } else {
        cout << "O n�mero " << numero << " n�o � perfeito." << endl;
    }

    return 0;
}
