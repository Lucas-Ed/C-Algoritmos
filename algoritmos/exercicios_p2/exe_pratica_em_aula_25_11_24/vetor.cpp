#include <iostream>
#include <locale>

using namespace std;

// Fun��o para exibir mensagem de boas-vindas.
void mensagem(string nome) {
    cout << "Ol� " << nome << "Seja bem-vindo!!!\n" << endl;
}

// Soma.
float soma(float n1, float n2) {
    return n1 + n2;
}

// Subtra��o.
float sub(float n1, float n2) {
    return n1 - n2;
}

// Multiplica��o.
float mult(float n1, float n2) {
    return n1 * n2;
}

// Divis�o.
float divisao(float n1, float n2) {
    if (n2 != 0) {
        return n1 / n2;
    } else {
        cout << "Erro: n�o � poss�vel dividir por 0.\n";
        return 0; // Retorna 0 como valor padr�o.
    }
}

// Ordena��o de vetor.
void ordenavetor(int vetA[], int tam) {
    int aux;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam - 1; j++) {
            if (vetA[j] > vetA[j + 1]) {
                // Algoritmo de troca.
                aux = vetA[j];
                vetA[j] = vetA[j + 1];
                vetA[j + 1] = aux;
            }
        }
    }

    // Imprime o vetor ordenado.
    cout << "Vetor ordenado: ";
    for (int i = 0; i < tam; i++) {
        cout << vetA[i] << " ";
    }
    cout << endl;
}

// Menu para selecionar opera��es.
int menu() {
    int op;
    cout << "|========= Calculadora ============|\n";
    cout << "| - Selecione a opera��o!          |\n";
    cout << "| 1- Soma                          |\n";
    cout << "| 2- Subtra��o                     |\n";
    cout << "| 3- Multiplica��o                 |\n";
    cout << "| 4- Divis�o                       |\n";
    cout << "| 5- Ordenar Vetor                 |\n";
    cout << "|==================================|\n";
    cout << "Escolha uma op��o: ";
    cin >> op;
    return op;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int op = 0, vetor[5] = {100, 12, 67, 45, 1};
    float n1 = 0, n2 = 0;

    mensagem("Lucas");

	do {
	
    op = menu();


    if (op >= 1 && op <= 4) {
        cout << "Informe o primeiro n�mero: ";
        cin >> n1;
        cout << "Informe o segundo n�mero: ";
        cin >> n2;
    }

    switch (op) {
        case 1:
            // Opera��o de soma.
            cout << "Soma: " << soma(n1, n2) << endl;
            break;
        case 2:
            // Opera��o de subtra��o.
            cout << "Subtra��o: " << sub(n1, n2) << endl;
            break;
        case 3:
            // Opera��o de multiplica��o.
            cout << "Multiplica��o: " << mult(n1, n2) << endl;
            break;
        case 4:
            // Opera��o de divis�o.
            cout << "Divis�o: " << divisao(n1, n2) << endl;
            break;
        case 5:
            // Ordena��o de vetor.
            ordenavetor(vetor, 5);
            break;
        default:
            cout << "Op��o inv�lida! Por favor, escolha uma op��o de 1 a 5." << endl;
            break;
    }
}while(op !=5);
    return 0;
}

